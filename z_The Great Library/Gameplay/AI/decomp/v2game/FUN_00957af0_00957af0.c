// FUN_00957af0 @ 00957af0 body=[[00957af0, 00957bb1]]


void FUN_00957af0(void)

{
  uint *puVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  undefined1 uVar6;
  int unaff_ESI;
  longlong lVar7;
  undefined8 uVar8;
  
  iVar5 = DAT_012587e4;
  iVar2 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(*(int *)(unaff_ESI + 100) + 300) * 4);
  for (piVar3 = *(int **)(iVar2 + 0xe54); piVar3 != (int *)0x0; piVar3 = (int *)piVar3[2]) {
    if (*piVar3 == *(int *)(unaff_ESI + 0x6c)) goto LAB_00957b39;
  }
  if (*(int *)(unaff_ESI + 0x6c) == *(int *)(iVar2 + 0xe64)) {
LAB_00957b39:
    uVar6 = 1;
  }
  else {
    uVar6 = 0;
  }
  *(undefined1 *)(unaff_ESI + 0x4c) = uVar6;
  *(undefined4 *)(unaff_ESI + 0x50) = 0x8000;
  *(undefined4 *)(unaff_ESI + 0x54) = 0;
  if (*(int *)(*(int *)(*(int *)(unaff_ESI + 100) + 0x188) + 0x84) < 1) {
    uVar4 = *(uint *)(*(int *)(*(int *)(iVar5 + 4) + *(int *)(*(int *)(unaff_ESI + 100) + 300) * 4)
                     + 0x1a8);
    lVar7 = __alldiv(uVar4 << 0x1e,((int)uVar4 >> 0x1f) << 0x1e | uVar4 >> 2,0x1f40000,0);
    uVar8 = __alldiv(lVar7 << 0xf,0x320000,0);
    puVar1 = (uint *)(unaff_ESI + 0x50);
    uVar4 = *puVar1;
    *puVar1 = *puVar1 + (uint)uVar8;
    *(int *)(unaff_ESI + 0x54) =
         *(int *)(unaff_ESI + 0x54) + (int)((ulonglong)uVar8 >> 0x20) +
         (uint)CARRY4(uVar4,(uint)uVar8);
  }
  return;
}

