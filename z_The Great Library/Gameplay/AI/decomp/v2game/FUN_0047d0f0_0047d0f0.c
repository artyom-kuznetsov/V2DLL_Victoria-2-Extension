// FUN_0047d0f0 @ 0047d0f0 body=[[0047d0f0, 0047d16a] [0047d17f, 0047d1e8]]


void FUN_0047d0f0(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int in_ECX;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  undefined1 local_18 [8];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3d918;
  local_10 = ExceptionList;
  if (param_2 == 0xb) {
    ExceptionList = &local_10;
    puVar3 = (undefined4 *)FUN_0055c6c0(DAT_012587e4,local_18,param_1 + 0x22c);
    *(undefined4 *)(in_ECX + 8) = *puVar3;
    *(undefined4 *)(in_ECX + 0xc) = puVar3[1];
  }
  else if (param_2 == 0x344) {
    ExceptionList = &local_10;
    iVar2 = FID_conflict__sscanf((char *)(param_1 + 0x22c),"%f",in_ECX + 0x10);
    if (iVar2 == 0) {
      FUN_009a1140();
      ExceptionList = local_10;
      return;
    }
  }
  else if (param_2 == 0x72f) {
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    local_8 = 0;
    ExceptionList = &local_10;
    FUN_009a1750(local_34,0);
    FUN_00875040();
    uVar1 = FUN_005c2ad0(local_34);
    *(undefined4 *)(in_ECX + 0x14) = uVar1;
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_34[0]);
    }
  }
  ExceptionList = local_10;
  return;
}

