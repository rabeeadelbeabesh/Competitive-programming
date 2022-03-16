
function joinedLogger(level, sep) {
  // write your code here
  return function(){
    const text = [...arguments].reduce((acc, arg) => (arg.level >= level) ? acc + arg.text + sep : acc,"")
    logger({text: text.slice(0, text.length - sep.length )});
    }
  }
  



