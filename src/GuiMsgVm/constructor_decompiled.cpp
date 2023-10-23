
GuiMsgVm * __fastcall GuiMsgVm::constructor(GuiMsgVm *this)

{
  AnmVm *intro_lines;
  int k;
  AnmVm *dialogue_lines;
  int j;
  AnmVm *portraits;
  int i;
  
  Timer::constructor(&this->script_time);
  i = 2;
  portraits = this->portraits;
  while (i = i + -1, -1 < i) {
    AnmVm::constructor(portraits);
    portraits = portraits + 1;
  }
  j = 2;
  dialogue_lines = this->dialogue_lines;
  while (j = j + -1, -1 < j) {
    AnmVm::constructor(dialogue_lines);
    dialogue_lines = dialogue_lines + 1;
  }
  k = 2;
  intro_lines = this->intro_lines;
  while (k = k + -1, -1 < k) {
    AnmVm::constructor(intro_lines);
    intro_lines = intro_lines + 1;
  }
  return this;
}

