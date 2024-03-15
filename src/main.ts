import "./styles.css";
import App from "./App.svelte";
import {mount} from "svelte";

//config para svelte 4
// @ts-ignore
// const app = new App({
//   target: document.getElementById("app"),
// });

// nuevo svelte 5
const app = mount(App,{target: document.getElementById("app")});

export default app;
