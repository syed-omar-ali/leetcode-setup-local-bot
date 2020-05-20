function getCurrentDate(){
    var x = new Date();
    var y = x.getFullYear().toString();
    var m = (x.getMonth() + 1).toString();
    var d = x.getDate().toString();
    (d.length == 1) && (d = '0' + d);
    (m.length == 1) && (m = '0' + m);
    var yyyymmdd = y + '_' + m + '_' + d;
    return yyyymmdd;
}

const fs = require("fs")
let currentDate = getCurrentDate()
let myArgs = process.argv.slice(2)
if(myArgs[0] == undefined){
    console.log('Provide the problem name...')
    process.exit()
}
let path = 'leetcode/' + currentDate + '/'+myArgs[0]
if (!fs.existsSync(path)) {
    fs.mkdirSync(path, { recursive: true });
}
path += '/main.cpp'
fs.createReadStream('template.cpp').pipe(fs.createWriteStream(path));