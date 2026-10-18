// FUN_00b25b20 @ 00b25b20 body=[[00b25b20, 00b25b98]]


undefined4 FUN_00b25b20(void)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  int *in_ECX;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  uVar1 = in_ECX[8];
  uVar4 = 0;
  if (uVar1 != 0) {
    iVar7 = 0;
    iVar5 = 0;
    do {
      iVar2 = *(int *)(in_ECX[0x11] + uVar4 * 4);
      puVar3 = (uint *)(*in_ECX + iVar5);
      *puVar3 = uVar4;
      puVar3[1] = (uint)in_ECX;
      if (iVar2 == -1) {
        uVar6 = 0;
      }
      else {
        uVar6 = iVar2 * 0x10 + in_ECX[1];
      }
      puVar3[2] = uVar6;
      puVar3[3] = in_ECX[9] + iVar7;
      uVar4 = uVar4 + 1;
      iVar5 = iVar5 + 0x18;
      iVar7 = iVar7 + 0x20;
      puVar3[5] = 0;
      puVar3[4] = 0;
    } while (uVar4 < uVar1);
  }
  FUN_00b1f7b0(*in_ECX,uVar1,FUN_00b25a50,FUN_00b25aa0);
  return 1;
}

