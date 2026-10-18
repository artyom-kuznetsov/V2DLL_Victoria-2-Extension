// FUN_00989690 @ 00989690 body=[[00989690, 009896cd]]


void FUN_00989690(char param_1)

{
  undefined4 *in_EAX;
  int iVar1;
  undefined1 in_DL;
  undefined4 *puVar2;
  
  iVar1 = 0;
  if (0 < (int)in_EAX[4]) {
    do {
      puVar2 = in_EAX;
      if (0xf < (uint)in_EAX[5]) {
        puVar2 = (undefined4 *)*in_EAX;
      }
      if (*(char *)((int)puVar2 + iVar1) == param_1) {
        puVar2 = in_EAX;
        if (0xf < (uint)in_EAX[5]) {
          puVar2 = (undefined4 *)*in_EAX;
        }
        *(undefined1 *)((int)puVar2 + iVar1) = in_DL;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)in_EAX[4]);
  }
  return;
}

