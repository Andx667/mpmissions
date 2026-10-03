# Converter

Paste the output of `diag_log getUnitLoadout player;` (run in the debug console on a unit whose gear you like) and get back a ready-to-use `Loadouts` config block. This runs entirely in your browser — nothing is uploaded anywhere.

The same conversion logic also ships as a Node CLI in [`tools/`](https://github.com/andx667/grad-loadout/tree/master/tools) for scripting/batch use.

<div class="grad-converter">
  <div id="grad-converter-messages" class="grad-converter-messages"></div>
  <button id="grad-converter-button" type="button">Convert</button>
  <div class="grad-converter-columns">
    <div class="grad-converter-column">
      <label for="grad-converter-input"><code>diag_log getUnitLoadout player;</code></label>
      <textarea id="grad-converter-input" rows="16" spellcheck="false" placeholder='[["arifle_MX_F","","",""," ",30,"acc_flashlight"],[],[],["U_B_CombatUniform_mcam",[]],["V_PlateCarrier1_rgr",[]],["",[]],"H_HelmetB","","ItemMap","","ItemCompass","ItemWatch","",[],[],[]]'></textarea>
    </div>
    <div class="grad-converter-column">
      <label for="grad-converter-output">grad-loadout config</label>
      <textarea id="grad-converter-output" rows="16" spellcheck="false" readonly></textarea>
    </div>
  </div>
</div>

<style>
.grad-converter-messages:empty { display: none; }
.grad-converter-messages {
  color: var(--md-typeset-color, #b00020);
  background: rgba(176, 0, 32, 0.08);
  border: 1px solid rgba(176, 0, 32, 0.3);
  border-radius: 0.2rem;
  padding: 0.5rem 0.75rem;
  margin-bottom: 0.75rem;
}
#grad-converter-button {
  font: inherit;
  font-weight: 700;
  padding: 0.5rem 1.25rem;
  margin-bottom: 0.75rem;
  border: none;
  border-radius: 0.2rem;
  cursor: pointer;
  color: var(--md-primary-bg-color, #fff);
  background: var(--md-primary-fg-color, #ffab00);
}
.grad-converter-columns {
  display: flex;
  flex-wrap: wrap;
  gap: 1rem;
}
.grad-converter-column {
  flex: 1 1 320px;
  min-width: 0;
}
.grad-converter-column label {
  display: block;
  margin-bottom: 0.25rem;
  font-weight: 700;
}
.grad-converter-column textarea {
  box-sizing: border-box;
  width: 100%;
  font-family: var(--md-code-font, monospace);
  font-size: 0.75rem;
  resize: vertical;
}
</style>

<script>
(function () {
  function convert() {
    var messages = document.getElementById("grad-converter-messages");
    messages.textContent = "";
    try {
      var input = document.getElementById("grad-converter-input").value;
      var loadout = JSON.parse(input);
      document.getElementById("grad-converter-output").value = unitLoadoutToGradLoadout(loadout);
    } catch (e) {
      messages.textContent = e.message;
    }
  }

  document.getElementById("grad-converter-button").addEventListener("click", convert);
})();
</script>
