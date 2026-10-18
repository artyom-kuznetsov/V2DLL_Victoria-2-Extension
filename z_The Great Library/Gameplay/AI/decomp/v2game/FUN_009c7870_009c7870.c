// FUN_009c7870 @ 009c7870 body=[[009c7870, 009c7985] [009c7989, 009c79a3]]


int FUN_009c7870(char param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *in_ECX;
  uint auStack_f8 [4];
  undefined4 uStack_e8;
  uint uStack_e4;
  undefined **appuStack_64 [19];
  void *pvStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b546a6;
  pvStack_14 = ExceptionList;
  puVar1 = in_ECX;
  if (0xf < (uint)in_ECX[5]) {
    puVar1 = (undefined4 *)*in_ECX;
  }
  ExceptionList = &pvStack_14;
  iVar2 = (**(code **)(PTR_PTR_00f0f77c + 8))(puVar1);
  if ((iVar2 < 0) && (param_1 != '\0')) {
    uStack_e4 = 0xf;
    uStack_e8 = 0;
    auStack_f8[0] = auStack_f8[0] & 0xffffff00;
    FUN_00409350("sound.cpp",9);
    puStack_10 = (undefined1 *)0x0;
    uVar3 = FUN_004015b0(auStack_f8,0xfa,0x1000);
    puStack_10._0_1_ = 1;
    FUN_00987d50(uVar3,"Sound ",6,0);
    if (0xf < (uint)in_ECX[5]) {
      in_ECX = (undefined4 *)*in_ECX;
    }
    uVar3 = FUN_00418e30(uVar3,in_ECX);
    uVar3 = FUN_00418e30(uVar3," not found.");
    FUN_00401280(uVar3);
    puStack_10 = (undefined1 *)((uint)puStack_10._1_3_ << 8);
    FUN_00987ac0(appuStack_64);
    appuStack_64[0] = std::ios_base::vftable;
    FUN_00aad52d(appuStack_64);
    if (0xf < uStack_e4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(auStack_f8[0]);
    }
  }
  ExceptionList = pvStack_18;
  return iVar2;
}

