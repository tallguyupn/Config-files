
      try {
        (function T({contextBridge:V,ipcRenderer:$}){if(!$)return;$.on("__ELECTRON_LOG_IPC__",(K,ee)=>{window.postMessage({cmd:"message",...ee})}),$.invoke("__ELECTRON_LOG__",{cmd:"getOptions"}).catch(K=>console.error(new Error(`electron-log isn't initialized in the main process. Please call log.initialize() before. ${K.message}`)));const J={sendToMain(K){try{$.send("__ELECTRON_LOG__",K)}catch(ee){console.error("electronLog.sendToMain ",ee,"data:",K),$.send("__ELECTRON_LOG__",{cmd:"errorHandler",error:{message:ee==null?void 0:ee.message,stack:ee==null?void 0:ee.stack},errorName:"sendToMain"})}},log(...K){J.sendToMain({data:K,level:"info"})}};for(const K of["error","warn","info","verbose","debug","silly"])J[K]=(...ee)=>J.sendToMain({data:ee,level:K});if(V&&process.contextIsolated)try{V.exposeInMainWorld("__electronLog",J)}catch{}typeof window=="object"?window.__electronLog=J:__electronLog=J})(require('electron'));
      } catch(e) {
        console.error(e);
      }
    