const path = require("path");
const outputDir = path.join(__dirname, "build/");

module.exports = {
  entry: "./src/Index.bs.js",
  output: {
    path: outputDir,
    publicPath: outputDir,
    filename: "Index.js"
  },
  module: {
    rules: [
      {
        test: /\.js$/,
        exclude: /node_modules/,
        use: {
          loader: "babel-loader"
        }
      }
    ]
  }
};
