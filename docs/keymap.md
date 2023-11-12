## code

* src\components\viewport\KeyboardEventManager.ts: import KeymapManager from "atom-keymap-plasticity";
* src\editor\Editor.ts: import KeymapManager from "atom-keymap-plasticity";

## entry: KeymapManager

* EditorLike: keymaps: AtomKeymap.KeymapManager;
* KeyboardEventManager(private readonly keymaps: AtomKeymap.KeymapManager)
* OrbitControls(private readonly keymaps: AtomKeymap.KeymapManager)
* Editor.ts:     readonly keymaps = new KeymapManager();
* SelectionKeypressStrategy(private readonly keymaps: AtomKeymap.KeymapManager,)
* ConfigFiles.loadKeymap(into: AtomKeymap.KeymapManager)

## KeymapManager: /default, /user

user from keymap.json
default from src\startup\default-keymap.ts

## TODO

KeyboardEventManager:

* KeyboardEventManager: packages\modeling\src\command\ObjectPicker.ts
* OrbitControls
* SelectionKeypressStrategy
* ViewportSelector
