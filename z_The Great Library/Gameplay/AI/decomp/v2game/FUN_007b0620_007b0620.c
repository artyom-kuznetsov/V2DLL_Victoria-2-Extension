// FUN_007b0620 @ 007b0620 body=[[007b0620, 007b0678]]


void FUN_007b0620(void)

{
  int in_EAX;
  int in_ECX;
  uint uVar1;
  
  for (uVar1 = in_EAX - in_ECX; 4 < (int)(uVar1 & 0xfffffffc); uVar1 = uVar1 - 4) {
    FUN_008a88d0();
    FUN_007b0810();
  }
  return;
}

