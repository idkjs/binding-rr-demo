# binding-rr-demo

Run this project:

```
npm install
npm start
# in another tab
npm run webpack
```

After you see the webpack compilation succeed (the `npm run webpack` step), open up the nested html files in `src/*` (**no server needed!**). Then modify whichever file in `src` and refresh the page to see the changes.

**For more elaborate ReasonReact examples**, please see https://github.com/reasonml-community/reason-react-example

## babel for jsx

* have to set up babel to get personalInformation.js to compile
  setup babel plugin
  babel preset react
  babel preset env and all that fuzz
  plus babel loader

* run `yarn add babel-preset-react babel-preset-env babel-core babel-loader -D`

- add .babelrc

```json
{
  "presets": ["env", "react"]
}
```
