const pk = require("./pk.node")
const fs = require('fs');

function protoChain(o) {
    var chain = [o.name];
    (function protoChainImpl(o) {
        if (o == null) {
            return;
        }
        var proto = Object.getPrototypeOf(o);
        if (proto == Object.prototype) {
            return;
        }

        if (proto && proto.hasOwnProperty('name')) {
            if (proto.name === '') {                
                return;
            }
            chain.push(proto.name);
            return protoChainImpl(proto);
        }
        else {
            return;
        }
    })(o);
    return chain;
}

function wordsok(w){
    //return true if w is not in a list of words
    var words = ['arguments', 'caller', 'length', 'name', 'prototype', 'toString']
    if (words.indexOf(w) > -1){
        return false;
    }
    return true;
}

function memberList(o)  {
    //list all the members of an object
    var members = [];
    // 'arguments', 'caller', 'length', 'name', 'prototype' ]

    var proto = Object.getPrototypeOf(o);
    if (proto == Object.prototype) {
        Object.keys(o).forEach(function (key) {
            return;// memberList(o[key]);
        });

        return;
    }
    else{
        members = Object.getOwnPropertyNames(o).sort().filter(wordsok);
        if (proto && proto.hasOwnProperty('name')){
            if (proto.name === ''){
                //console.log(Object.getOwnPropertyNames(o).sort().filter(wordsok))
                members = members.concat(Object.getOwnPropertyNames(o.prototype).sort().filter(wordsok));
            }            
        }
    }

    var content ="{" + "\n";

    for(var i=0; i<members.length; i++){
        content = content + "\t" + members[i] + "();\n";
    }
    
    var content = content + "}" + "\n";

    return content;
}

var a = Object.getPrototypeOf(Object)

fs.writeFile('./pk.txt', '', { flag: 'w' }, err => {
    if (err) {
        console.error(err);
    }
});

Object.keys(pk).forEach(function (key) {
    var trace = protoChain(pk[key])
    var content = trace.join(" : ") + "\n";
    var content = content + memberList(pk[key]) + "\n"
    fs.writeFile('./pk.txt', content, { flag: 'a+' }, err => {
        if (err) {
            console.error(err);
        }
        // file written successfully
    });
}
)
//console.log(trace);
//console.log(pk.Body);
//console.log(pk);
console.log(Object.getOwnPropertyNames(pk['Partition'].prototype));
console.log(typeof pk['Partition'].prototype);
console.log("ok")
