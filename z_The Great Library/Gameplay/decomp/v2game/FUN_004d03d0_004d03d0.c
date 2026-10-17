// FUN_004d03d0 @ 004d03d0  (requested 004D03D0, first bytes: 55 8B EC 83 EC 0C 56 57)


void FUN_004d03d0(int param_1,char param_2,undefined1 param_3,uint param_4,char param_5)

{
  int iVar1;
  int in_EAX;
  int in_ECX;
  char cVar2;
  bool bVar3;
  
  iVar1 = *(int *)(in_EAX + 0x60);
  for (; in_ECX != 0; in_ECX = in_ECX + -1) {
    iVar1 = *(int *)(iVar1 + 0x224);
  }
  param_4 = param_4 & 0x80000003;
  bVar3 = false;
  if ((int)param_4 < 0) {
    param_4 = (param_4 - 1 | 0xfffffffc) + 1;
    bVar3 = (int)param_4 < 0;
  }
  *(uint *)(iVar1 + 0x24) = param_4;
  if (bVar3) {
    *(undefined4 *)(iVar1 + 0x24) = 3;
  }
  *(undefined1 *)(iVar1 + 0x180) = param_3;
  if (((*(int *)(iVar1 + 0x20) < 1) || (10 < *(int *)(iVar1 + 0x184))) ||
     (*(char *)(iVar1 + 0x188) != '\0')) {
    cVar2 = '\0';
  }
  else {
    cVar2 = '\x01';
  }
  if (param_2 != cVar2) {
    if (((0 < *(int *)(iVar1 + 0x20)) && (*(int *)(iVar1 + 0x184) < 0xb)) &&
       (*(char *)(iVar1 + 0x188) == '\0')) {
      *(undefined1 *)(iVar1 + 0x188) = 1;
      FUN_004f5750();
      return;
    }
    if (param_5 != '\0') {
      FUN_004a4cb0(in_EAX + 0x1c8);
      return;
    }
    FUN_0052db30(*(undefined4 *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 4) * 4),in_EAX);
  }
  return;
}

