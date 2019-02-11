const lib = require('../build/bindings/js-testlib-asm.js');

/*
Next lines are needed for using wasm module
 */
// function init() {
//     return new Promise(resolve => {
//         lib.onRuntimeInitialized = () => {
//             resolve(lib);
//         };
//     });
// }
//
// async function main() {
//     await init();
//     do stuff there
// }
//
// main().catch(e => { console.error(e); process.exit(); });

const { TestClass } = lib;
const buf = Buffer.from('f5ff', 'hex');
console.log('JS: buf', buf);
const uint8Array = new Uint8Array(buf);
console.log('JS: uint8array:', uint8Array);
let instance = TestClass.fromBytes(uint8Array);
console.log('JS: instance.serialize():', instance.serialize());
let instance2 = TestClass.fromBytes(buf);
console.log('JS: instance2.serialize():', instance2.serialize());
const restoredBuffer = Buffer.from(instance.serialize());
console.log('JS: restored buffer:', restoredBuffer);