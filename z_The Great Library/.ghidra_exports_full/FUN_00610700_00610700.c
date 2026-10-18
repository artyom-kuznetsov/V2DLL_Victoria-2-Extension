// FUN_00610700 @ 00610700 body=[[00610700, 006107e0]]


void FUN_00610700(int param_1,undefined4 param_2)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = param_1 - in_EAX >> 4;
  iVar4 = iVar5 - (param_1 - in_EAX >> 0x1f) >> 1;
  if (0 < iVar4) {
    iVar2 = iVar4 * 2 + 2;
    do {
      iVar4 = iVar4 + -1;
      iVar2 = iVar2 + -2;
      iVar1 = iVar4;
      for (iVar3 = iVar2; iVar3 < iVar5; iVar3 = iVar3 * 2 + 2) {
        if (*(uint *)(in_EAX + iVar3 * 0x10) < *(uint *)(in_EAX + -0x10 + iVar3 * 0x10)) {
          iVar3 = iVar3 + -1;
        }
        *(undefined8 *)(in_EAX + iVar1 * 0x10) = *(undefined8 *)(in_EAX + iVar3 * 0x10);
        *(undefined8 *)(in_EAX + 8 + iVar1 * 0x10) = *(undefined8 *)(in_EAX + 8 + iVar3 * 0x10);
        iVar1 = iVar3;
      }
      if (iVar3 == iVar5) {
        *(undefined8 *)(in_EAX + iVar1 * 0x10) = *(undefined8 *)(in_EAX + -0x10 + iVar5 * 0x10);
        *(undefined8 *)(in_EAX + 8 + iVar1 * 0x10) = *(undefined8 *)(in_EAX + iVar5 * 0x10 + -8);
      }
      FUN_00612df0(iVar4,param_2);
    } while (0 < iVar4);
  }
  return;
}

