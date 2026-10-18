// FUN_009c70a0 @ 009c70a0 body=[[009c70a0, 009c726a] [009c726e, 009c7282]]


void FUN_009c70a0(void)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int in_ECX;
  int *piVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined1 auStack_124 [12];
  undefined4 local_118;
  undefined4 local_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined **appuStack_ac [19];
  void *pvStack_60;
  undefined1 uStack_58;
  undefined4 uStack_38;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b58bf6;
  pvStack_14 = ExceptionList;
  uStack_10c = 0x9c70cb;
  ExceptionList = &pvStack_14;
  piVar1 = (int *)FUN_009c7290();
  uStack_10c = *(undefined4 *)(in_ECX + 0x4c);
  piVar4 = (int *)(in_ECX + 0x24);
  local_114 = 0xf;
  local_118 = 0;
  FUN_00408ed0(piVar4,0,0xffffffff);
  (**(code **)(*piVar1 + 8))(DAT_01258ab4);
  FUN_009c76f0();
  piVar1 = (int *)FUN_009c7290();
  uVar6 = DAT_01258ab4;
  (**(code **)(*piVar1 + 0x5c))((float)*(int *)(in_ECX + 0x50));
  if (*(int *)(in_ECX + 0x44) != -1) {
    piVar1 = (int *)FUN_009c7290();
    (**(code **)(*piVar1 + 0x3c))(DAT_01258ab4,*(undefined4 *)(in_ECX + 0x44));
  }
  if (*(int *)(in_ECX + 0x48) != 0) {
    piVar1 = (int *)FUN_009c7290();
    (**(code **)(*piVar1 + 0x40))(DAT_01258ab4,*(undefined4 *)(in_ECX + 0x48));
  }
  DAT_01258ab4 = DAT_01258ab4 + 1;
  uStack_110 = 0xf;
  local_114 = 0;
  auStack_124[0] = 0;
  FUN_00409350("sound.cpp",9);
  uStack_38 = 0;
  uVar2 = FUN_004015b0(auStack_124,0x57,0);
  uStack_38 = CONCAT31(uStack_38._1_3_,1);
  uVar5 = uVar2;
  FUN_00987d50(uVar2,"Loaded sound ",0xd,0);
  if (0xf < *(uint *)(in_ECX + 0x38)) {
    piVar4 = (int *)*piVar4;
  }
  uVar3 = FUN_00418e30(uVar2,piVar4);
  uVar2 = *(undefined4 *)(in_ECX + 0x50);
  uVar2 = FUN_00418e30(uVar3,&DAT_00ded950,uVar2,DAT_01258ab4,uVar2,&DAT_00ded950,uVar2,uVar2);
  uVar2 = FUN_00455470(uVar2);
  uVar2 = FUN_00418e30(uVar2);
  uVar2 = FUN_00455470(uVar2);
  FUN_00401280(uVar2);
  uStack_58 = 0;
  FUN_00987ac0(appuStack_ac);
  appuStack_ac[0] = std::ios_base::vftable;
  FUN_00aad52d(appuStack_ac);
  if (0xf < uVar6) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uVar5);
  }
  ExceptionList = pvStack_60;
  return;
}

