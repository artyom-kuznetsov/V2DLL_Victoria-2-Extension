// FUN_009a2a90 @ 009a2a90  (requested 009A2A90, first bytes: 55 8B EC 83 E4 F8 6A FF)


/* WARNING: Removing unreachable block (ram,0x009a2d80) */

void FUN_009a2a90(char *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *in_ECX;
  undefined4 extraout_ECX;
  int *piVar4;
  int *piVar5;
  char *pcStack_1c8;
  char *pcStack_1c4;
  undefined4 *local_1b4;
  undefined1 auStack_1b0 [8];
  uint uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  uint uStack_194;
  undefined4 auStack_18c [2];
  undefined4 ***apppuStack_184 [3];
  uint uStack_178;
  undefined1 auStack_174 [4];
  uint uStack_170;
  undefined4 uStack_160;
  uint uStack_15c;
  uint uStack_154;
  undefined4 uStack_144;
  uint uStack_140;
  int aiStack_120 [24];
  undefined **appuStack_c0 [37];
  void *pvStack_2c;
  undefined1 uStack_24;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b57aad;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  while( true ) {
    piVar4 = *(int **)(param_1 + 0x1c);
    if ((char)piVar4[0x44] == '\0') {
      pcStack_1c4 = (char *)0x9a2ad7;
      iVar1 = (**(code **)(*piVar4 + 4))();
      piVar4[2] = iVar1;
      if (iVar1 == 0) {
        piVar4[3] = 0x13;
      }
      *(undefined1 *)(piVar4 + 0x44) = 1;
    }
    piVar4 = piVar4 + 3;
    piVar5 = aiStack_120;
    for (iVar1 = 0x41; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar5 = *piVar4;
      piVar4 = piVar4 + 1;
      piVar5 = piVar5 + 1;
    }
    if ((aiStack_120[0] == 4) || (aiStack_120[0] == 0x13)) break;
    pcStack_1c4 = param_1;
    pcStack_1c8 = (char *)0x9a2b17;
    FUN_009a1440();
    pcStack_1c4 = *(char **)(param_1 + 0x20);
    pcStack_1c8 = param_1;
    (**(code **)(*in_ECX + 0x10))();
  }
  pcStack_1c4 = (char *)0x9a2b36;
  (**(code **)(**(int **)(param_1 + 0x1c) + 4))();
  if (*(int *)(param_1 + 0xc) == 0) {
    pcStack_1c4 = (char *)0x9a2b46;
    (**(code **)(*in_ECX + 0x14))();
    ExceptionList = pvStack_14;
    return;
  }
  pcStack_1c4 = auStack_174;
  pcStack_1c8 = (char *)0x9a2b69;
  FUN_009a1320();
  uStack_c = 0;
  iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 4);
  pcStack_1c4 = (char *)0xe;
  pcStack_1c8 = "persistent.cpp";
  local_1b4 = (undefined4 *)(iVar1 + 0x14);
  uStack_19c = 0xf;
  uStack_1a0 = 0;
  auStack_1b0[0] = 0;
  FUN_00409350();
  pcStack_1c4 = (char *)0x1000;
  pcStack_1c8 = (char *)0x27;
  uStack_c._0_1_ = 1;
  uStack_194 = FUN_004015b0(auStack_1b0);
  uStack_c = CONCAT31(uStack_c._1_3_,2);
  uVar3 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 4) + 8);
  if (0xf < *(uint *)(iVar1 + 0x28)) {
    local_1b4 = (undefined4 *)*local_1b4;
  }
  pcStack_1c4 = (char *)0x0;
  pcStack_1c8 = (char *)0x8;
  FUN_00987d50(uStack_194,"Error: \"");
  if (uStack_170 < 0x10) {
    apppuStack_184[0] = apppuStack_184;
  }
  uVar2 = FUN_00418e30(uStack_1a4,apppuStack_184[0]);
  uVar3 = FUN_00418e30(uVar2,"\" in file: \"",pcStack_1c4,pcStack_1c4,extraout_ECX,"\" near line: ",
                       extraout_ECX,uVar3);
  uVar3 = FUN_00418e30(uVar3);
  uVar3 = FUN_00418e30(uVar3);
  uVar3 = FUN_00455470(uVar3);
  FUN_00401280(uVar3);
  uStack_24 = 1;
  FUN_00987ac0(appuStack_c0);
  appuStack_c0[0] = std::ios_base::vftable;
  FUN_00aad52d(appuStack_c0);
  uStack_24 = 0;
  if ((undefined4 *)0xf < local_1b4) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(pcStack_1c8);
  }
  uStack_194 = 0xf;
  uStack_198 = 0;
  uStack_1a8 = uStack_1a8 & 0xffffff00;
  FUN_00409350("Error reading this file, check log: ",0x24);
  uStack_24 = 3;
  pcStack_1c8 = (char *)((uint)pcStack_1c8 & 0xffffff00);
  FUN_00409350(&DAT_00ded950,1);
  uStack_24 = 4;
  FUN_00988f20(&pcStack_1c8);
  uStack_24 = 5;
  uVar3 = FUN_00988f20(auStack_18c);
  uStack_24 = 6;
  FUN_00448aa0(uVar3,0,0xffffffff);
  if (0xf < uStack_140) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_154);
  }
  uStack_140 = 0xf;
  uStack_144 = 0;
  uStack_154 = uStack_154 & 0xffffff00;
  if (0xf < uStack_15c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_170);
  }
  uStack_15c = 0xf;
  uStack_160 = 0;
  uStack_170 = uStack_170 & 0xffffff00;
  FUN_009a2420(param_1 + 4);
  if (0xf < uStack_194) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_1a8);
  }
  uStack_194 = 0xf;
  uStack_198 = 0;
  uStack_1a8 = uStack_1a8 & 0xffffff00;
  if (0xf < uStack_178) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(auStack_18c[0]);
  }
  ExceptionList = pvStack_2c;
  return;
}

