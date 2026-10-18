// FUN_004a4cb0 @ 004a4cb0 body=[[004a4cb0, 004a4e98]]


void FUN_004a4cb0(int param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  int local_14;
  uint local_10;
  
  iVar7 = *(int *)(param_1 + 0x6c);
  uVar2 = *(uint *)(iVar7 + 0x58);
  iVar3 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar7 + 0x5c) * 4);
  switch(*(undefined4 *)(param_1 + 0x7c)) {
  case 0:
    iVar4 = FUN_004d0080(iVar7,*(undefined4 *)(param_1 + 0x70));
    iVar7 = *(int *)(*(int *)(param_1 + 0x6c) + 0x60);
    for (; iVar4 != 0; iVar4 = iVar4 + -1) {
      iVar7 = *(int *)(iVar7 + 0x224);
    }
    FUN_004dab20();
    lVar8 = __allmul(DAT_00f0af70,DAT_00f0af74,uVar2,local_14);
    uVar6 = (uint)(lVar8 >> 0xf);
    puVar1 = (uint *)(iVar7 + 0x210);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 + uVar6;
    *(int *)(iVar7 + 0x214) =
         *(int *)(iVar7 + 0x214) + (int)((ulonglong)(lVar8 >> 0xf) >> 0x20) +
         (uint)CARRY4(uVar2,uVar6);
    *(int *)(iVar7 + 0x218) = *(int *)(iVar7 + 0x218) + 0x32;
    puVar5 = (uint *)FUN_004da720(*(undefined4 *)(iVar7 + 0x18),iVar3,1,param_1 + 8);
    uVar6 = *puVar5;
    puVar1 = (uint *)(param_1 + 0x60);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - uVar6;
    *(int *)(param_1 + 100) = (*(int *)(param_1 + 100) - puVar5[1]) - (uint)(uVar2 < uVar6);
    FUN_004daba0(*(undefined4 *)(iVar7 + 0x18),param_1 + 8);
    break;
  case 1:
    puVar5 = (uint *)FUN_004da720(*(undefined4 *)(param_1 + 0x70),iVar3,1,param_1 + 8);
    uVar6 = *puVar5;
    puVar1 = (uint *)(param_1 + 0x60);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - uVar6;
    *(int *)(param_1 + 100) = (*(int *)(param_1 + 100) - puVar5[1]) - (uint)(uVar2 < uVar6);
    FUN_004daba0(*(undefined4 *)(param_1 + 0x70),param_1 + 8);
    break;
  case 2:
    iVar4 = *(int *)(iVar7 + 0x60);
    for (iVar7 = *(int *)(param_1 + 0x78); iVar7 != 0; iVar7 = iVar7 + -1) {
      iVar4 = *(int *)(iVar4 + 0x224);
    }
    FUN_004dab20();
    lVar8 = __allmul(DAT_00f0af70,DAT_00f0af74,local_10,iVar3);
    uVar6 = (uint)(lVar8 >> 0xf);
    puVar1 = (uint *)(iVar4 + 0x210);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 + uVar6;
    *(int *)(iVar4 + 0x214) =
         *(int *)(iVar4 + 0x214) + (int)((ulonglong)(lVar8 >> 0xf) >> 0x20) +
         (uint)CARRY4(uVar2,uVar6);
    *(int *)(iVar4 + 0x218) = *(int *)(iVar4 + 0x218) + 0x32;
    puVar1 = (uint *)(param_1 + 0x60);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - local_10;
    *(int *)(param_1 + 100) = (*(int *)(param_1 + 100) - iVar3) - (uint)(uVar2 < local_10);
    *(undefined4 *)(iVar4 + 0x184) = 0;
    *(undefined1 *)(iVar4 + 0x188) = 0;
    break;
  case 3:
    iVar4 = *(int *)(iVar7 + 0x60);
    for (iVar7 = *(int *)(param_1 + 0x78); iVar7 != 0; iVar7 = iVar7 + -1) {
      iVar4 = *(int *)(iVar4 + 0x224);
    }
    FUN_004da800(iVar3,1,param_1 + 8);
    puVar1 = (uint *)(param_1 + 0x60);
    uVar6 = *puVar1;
    *puVar1 = *puVar1 - uVar2;
    *(int *)(param_1 + 100) = (*(int *)(param_1 + 100) - local_14) - (uint)(uVar6 < uVar2);
    FUN_004daba0(*(undefined4 *)(iVar4 + 0x18),param_1 + 8);
    FUN_004d02e0();
    break;
  default:
    goto switchD_004a4ce3_default;
  }
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 4;
switchD_004a4ce3_default:
  return;
}

