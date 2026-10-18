// FUN_007e9080 @ 007e9080 body=[[007e9080, 007e94ff] [007e9503, 007e9510] [007e9514, 007e9521] [007e9525, 007e953b]]


void FUN_007e9080(void)

{
  undefined4 uVar1;
  uint uVar2;
  int in_ECX;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int **ppiVar7;
  int *piStack_f0;
  char *pcStack_ec;
  int *piStack_e8;
  undefined *puStack_e4;
  int *piStack_e0;
  undefined *puStack_dc;
  int *piStack_d8;
  undefined4 uStack_d4;
  char *pcStack_d0;
  int *piStack_cc;
  int iStack_c8;
  char *pcStack_c4;
  int *piStack_c0;
  undefined *puStack_bc;
  int *piStack_b8;
  undefined4 *puStack_b4;
  undefined *local_b0;
  int *local_ac;
  int local_a8;
  undefined *puStack_a4;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_68;
  void *local_64;
  undefined4 local_60;
  undefined4 local_58 [17];
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b61da3;
  pvStack_14 = ExceptionList;
  puStack_a4 = (undefined *)0x1;
  local_a8 = in_ECX + 0x1a4;
  ExceptionList = &pvStack_14;
  *(int *)(in_ECX + 0x44) = *(int *)(in_ECX + 0x1a0) + 0x158;
  local_ac = (int *)0x7e90c2;
  uVar1 = FUN_009bcbf0();
  puStack_a4 = (undefined *)0x1;
  local_a8 = in_ECX + 0x1c0;
  *(undefined4 *)(in_ECX + 0x210) = uVar1;
  local_ac = (int *)0x7e90d9;
  uVar2 = FUN_009bcbf0();
  iVar4 = *(int *)(in_ECX + 0x44);
  *(uint *)(in_ECX + 0x214) = uVar2;
  if (*(uint *)(in_ECX + 0x210) < 10000) {
    iVar3 = *(uint *)(in_ECX + 0x210) * 0x2c;
    uVar1 = *(undefined4 *)(iVar3 + 0x24 + iVar4);
    uVar5 = *(undefined4 *)(iVar3 + 0x28 + iVar4);
  }
  else {
    uVar1 = 0;
    uVar5 = 0;
  }
  *(undefined4 *)(in_ECX + 0x1dc) = uVar1;
  *(undefined4 *)(in_ECX + 0x1e0) = uVar5;
  if (uVar2 < 10000) {
    uVar1 = *(undefined4 *)(uVar2 * 0x2c + 0x24 + iVar4);
    uVar5 = *(undefined4 *)(uVar2 * 0x2c + 0x28 + iVar4);
  }
  else {
    uVar1 = 0;
    uVar5 = 0;
  }
  *(undefined4 *)(in_ECX + 0x1e8) = uVar5;
  *(undefined4 *)(in_ECX + 0x1e4) = uVar1;
  puStack_a4 = *(undefined **)(*(int *)(in_ECX + 0x1a0) + 100);
  local_b0 = (undefined *)(*(int *)(in_ECX + 0x1a0) + 0x6bcfc);
  local_ac = (int *)(in_ECX + 500);
  puStack_b4 = (undefined4 *)0x7e9153;
  local_a8 = (int)local_ac;
  uVar1 = FUN_009be510();
  *(undefined4 *)(in_ECX + 0x218) = uVar1;
  local_68 = 0;
  local_64 = (void *)0x0;
  local_60 = 0;
  local_78 = 0;
  local_74 = 0;
  local_70 = 0;
  local_88 = 0;
  local_84 = 0;
  local_80 = 0;
  local_c._0_1_ = 2;
  local_c._1_3_ = 0;
  puStack_a4 = (undefined *)0x7e91ae;
  FUN_007ea300();
  puStack_a4 = (undefined *)0x7e91ec;
  FUN_00423920();
  puStack_a4 = (undefined *)0x7e9201;
  FUN_004e9b90();
  puStack_a4 = (undefined *)0x7e922e;
  FUN_007ea300();
  puStack_a4 = (undefined *)0x7e9273;
  FUN_00423920();
  puStack_a4 = (undefined *)0x7e9288;
  FUN_004e9b90();
  puStack_a4 = (undefined *)0x7e92b5;
  FUN_007ea300();
  puStack_a4 = (undefined *)0x7e92fa;
  FUN_00423920();
  puStack_a4 = (undefined *)0x7e930f;
  FUN_004e9b90();
  puStack_a4 = (undefined *)0x7e9347;
  FUN_007ea300();
  puStack_a4 = (undefined *)0x7e938c;
  FUN_00423920();
  puStack_a4 = (undefined *)0x7e93a1;
  FUN_004e9b90();
  puStack_a4 = (undefined *)0x7e93aa;
  FUN_00408b00();
  local_b0 = (undefined *)0x0;
  local_ac = (int *)0x0;
  local_a8 = 0;
  local_c._0_1_ = 3;
  piStack_b8 = (int *)0x7e93cf;
  puStack_b4 = &local_88;
  FUN_009beeb0();
  local_c = CONCAT31(local_c._1_3_,2);
  uVar1 = *(undefined4 *)(in_ECX + 0x1a0);
  puVar6 = local_58;
  ppiVar7 = &piStack_f0;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *ppiVar7 = (int *)*puVar6;
    puVar6 = puVar6 + 1;
    ppiVar7 = ppiVar7 + 1;
  }
  uVar1 = FUN_0099ae10(uVar1,&local_78);
  *(undefined4 *)(in_ECX + 0x220) = uVar1;
  local_ac = (int *)0x0;
  if (*(int *)(in_ECX + 0x218) != 0) {
    local_ac = *(int **)(*(int *)(*(int *)(in_ECX + 0x1a0) + 0x6bd00) + -4 +
                        *(int *)(in_ECX + 0x218) * 4);
  }
  puStack_a4 = &DAT_00e0bce4;
  *(int **)(in_ECX + 0x21c) = local_ac;
  local_a8 = 0;
  local_b0 = (undefined *)0x7e9437;
  uVar1 = (**(code **)(*local_ac + 0x24))();
  *(undefined4 *)(in_ECX + 0x224) = uVar1;
  piStack_b8 = *(int **)(in_ECX + 0x21c);
  local_b0 = &DAT_00e19384;
  puStack_b4 = (undefined4 *)0x0;
  puStack_bc = (undefined *)0x7e9452;
  uVar1 = (**(code **)(*piStack_b8 + 0x24))();
  *(undefined4 *)(in_ECX + 0x228) = uVar1;
  piStack_c0 = *(int **)(in_ECX + 0x21c);
  puStack_bc = &DAT_00e19be0;
  pcStack_c4 = (char *)0x7e946b;
  uVar1 = (**(code **)(*piStack_c0 + 0x34))();
  *(undefined4 *)(in_ECX + 0x230) = uVar1;
  piStack_cc = *(int **)(in_ECX + 0x21c);
  pcStack_c4 = "FlagCoords";
  iStack_c8 = 0;
  pcStack_d0 = (char *)0x7e9486;
  uVar1 = (**(code **)(*piStack_cc + 0x24))();
  *(undefined4 *)(in_ECX + 0x234) = uVar1;
  piStack_d8 = *(int **)(in_ECX + 0x21c);
  pcStack_d0 = "WorldViewProjectionMatrix";
  uStack_d4 = 0;
  puStack_dc = (undefined *)0x7e94a1;
  uVar1 = (**(code **)(*piStack_d8 + 0x24))();
  *(undefined4 *)(in_ECX + 0x22c) = uVar1;
  piStack_e0 = *(int **)(in_ECX + 0x21c);
  puStack_dc = &DAT_00e1a0d4;
  puStack_e4 = (undefined *)0x7e94ba;
  uVar1 = (**(code **)(*piStack_e0 + 0x34))();
  *(undefined4 *)(in_ECX + 0x238) = uVar1;
  piStack_e8 = *(int **)(in_ECX + 0x21c);
  puStack_e4 = &DAT_00e1a0dc;
  pcStack_ec = (char *)0x7e94d3;
  uVar1 = (**(code **)(*piStack_e8 + 0x34))();
  *(undefined4 *)(in_ECX + 0x23c) = uVar1;
  piStack_f0 = *(int **)(in_ECX + 0x21c);
  pcStack_ec = "disable";
  uVar1 = (**(code **)(*piStack_f0 + 0x34))();
  *(undefined4 *)(in_ECX + 0x240) = uVar1;
  if (piStack_d8 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(piStack_d8);
  }
  if (iStack_c8 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(iStack_c8);
  }
  if (piStack_b8 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(piStack_b8);
  }
  ExceptionList = local_64;
  return;
}

