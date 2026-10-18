// FUN_004f5750 @ 004f5750 body=[[004f5750, 004f57ed]]


void FUN_004f5750(void)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int unaff_ESI;
  undefined8 uVar7;
  
  uVar7 = __alldiv(*(uint *)(unaff_ESI + 0x210) << 0xf,
                   *(int *)(unaff_ESI + 0x214) << 0xf | *(uint *)(unaff_ESI + 0x210) >> 0x11,
                   DAT_00f0b2d0,DAT_00f0b2d4);
  iVar6 = (int)((ulonglong)uVar7 >> 0x20);
  uVar5 = (uint)uVar7;
  iVar4 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(*(int *)(unaff_ESI + 0x1c) + 0x5c) * 4);
  puVar2 = (uint *)(iVar4 + 0xe78);
  uVar3 = *puVar2;
  *puVar2 = *puVar2 + uVar5;
  *(int *)(iVar4 + 0xe7c) = *(int *)(iVar4 + 0xe7c) + iVar6 + (uint)CARRY4(uVar3,uVar5);
  iVar4 = *(int *)(iVar4 + (DAT_01258738 + 0xd) * 0x10);
  puVar2 = (uint *)(iVar4 + 0x40);
  uVar3 = *puVar2;
  *puVar2 = *puVar2 + uVar5;
  piVar1 = (int *)(iVar4 + 0x44);
  *piVar1 = *piVar1 + iVar6 + (uint)CARRY4(uVar3,uVar5);
  *(undefined4 *)(unaff_ESI + 0x17c) = 0;
  *(undefined4 *)(unaff_ESI + 0x210) = 0;
  *(undefined4 *)(unaff_ESI + 0x214) = 0;
  *(undefined4 *)(unaff_ESI + 0x218) = 0;
  if (*(undefined4 **)(unaff_ESI + 0x1d0) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(unaff_ESI + 0x1d0))(1);
  }
  *(undefined4 *)(unaff_ESI + 0x1d0) = 0;
  return;
}

