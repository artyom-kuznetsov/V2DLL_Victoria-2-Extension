// FUN_00a44790 @ 00a44790 body=[[00a44790, 00a4482c] [00a44830, 00a4484f]]


void FUN_00a44790(void)

{
  undefined4 ***pppuVar1;
  int in_ECX;
  int iVar2;
  int *piVar3;
  undefined1 local_40 [28];
  undefined4 **local_24 [4];
  undefined4 local_14;
  uint local_10;
  int local_8;
  
  iVar2 = 0;
  local_8 = 0;
  if (0 < *(int *)(in_ECX + 0x94)) {
    piVar3 = (int *)(in_ECX + 0x1c0);
    do {
      if (*piVar3 != 0) {
        (**(code **)(*(int *)*piVar3 + 8))((int *)*piVar3);
      }
      local_10 = 0xf;
      local_14 = 0;
      local_24[0] = (undefined4 **)((uint)local_24[0] & 0xffffff00);
      FUN_00408ed0(*(int *)(in_ECX + 0x1b0) + iVar2,0,0xffffffff);
      pppuVar1 = (undefined4 ***)local_24[0];
      if (local_10 < 0x10) {
        pppuVar1 = local_24;
      }
      D3DXCreateTextureFromFileExA
                (*(undefined4 *)(*(int *)(in_ECX + 0x90) + 100),pppuVar1,0xffffffff,0xffffffff,
                 0xffffffff,0,0,0,0xffffffff,0xffffffff,0,local_40,0,piVar3);
      if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_24[0]);
      }
      local_8 = local_8 + 1;
      piVar3 = piVar3 + 1;
      iVar2 = iVar2 + 0x1c;
    } while (local_8 < *(int *)(in_ECX + 0x94));
  }
  return;
}

