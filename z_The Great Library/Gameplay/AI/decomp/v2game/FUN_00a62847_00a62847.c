// FUN_00a62847 @ 00a62847 body=[[00a62847, 00a62b77] [00a62b7b, 00a62c77] [00a62c80, 00a62d69] [00a62d6d, 00a62e3e]]


/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a62847(void)

{
  char *pcVar1;
  ushort uVar2;
  uint *puVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  char *pcVar8;
  void *_Dst;
  void *_Src;
  int iVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  int *piVar12;
  uint uVar13;
  int *piVar14;
  DWORD DVar15;
  int *unaff_EBX;
  int unaff_EBP;
  int *unaff_EDI;
  uint uStack_24;
  undefined8 uStack_1c;
  
  FUN_009885d0();
  *(undefined1 *)(unaff_EBP + -4) = 0x2f;
  FUN_004015b0();
  *(undefined1 *)(unaff_EBP + -4) = 0x30;
  (**(code **)(*unaff_EDI + 0x1c))();
  FUN_00987d20();
  FUN_00447240();
  FUN_00401280();
  *(undefined1 *)(unaff_EBP + -4) = 0x2f;
  FUN_00401650();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00408ad0();
  uStack_1c = CONCAT44(0xa628d0,(undefined4)uStack_1c);
  uVar13 = FUN_00a89eb0();
  uStack_1c = (ulonglong)uVar13 << 0x20;
  uStack_24 = 0xa628dc;
  FUN_00a8ac70();
LAB_00a628e1:
  FUN_0076cbc0();
LAB_00a629a9:
  (*(code *)PTR__free_00f071fc)();
  (*(code *)PTR__free_00f071fc)();
switchD_00a618ea_caseD_0:
  uStack_1c = CONCAT44(0xa618d1,(undefined4)uStack_1c);
  iVar7 = FUN_00a89d00();
  bVar5 = false;
  if (iVar7 < 1) {
    if (iVar7 == -1) {
      *(undefined4 *)(unaff_EBP + -0x7c) = 0xf;
      *(undefined4 *)(unaff_EBP + -0x80) = 0;
      *(undefined1 *)(unaff_EBP + -0x90) = 0;
      FUN_00409350();
      *(undefined1 *)(unaff_EBP + -4) = 0x37;
      uStack_1c = CONCAT44(0xa62ccc,(undefined4)uStack_1c);
      FUN_004015b0();
      *(undefined1 *)(unaff_EBP + -4) = 0x38;
      piVar14 = (int *)FUN_00987d20();
      FUN_00408be0();
      if (((*(byte *)(*(int *)(*piVar14 + 4) + 0xc + (int)piVar14) & 6) == 0) &&
         (iVar7 = (**(code **)(**(int **)(*(int *)(*piVar14 + 4) + 0x38 + (int)piVar14) + 0x34))(),
         iVar7 == -1)) {
        bVar5 = true;
      }
      if (bVar5) {
        FUN_00401120();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x37;
      FUN_00987ac0();
      *(undefined ***)(unaff_EBP + -0x3b4) = std::ios_base::vftable;
      FUN_00aad52d();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      if (0xf < *(uint *)(unaff_EBP + -0x7c)) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
    DVar15 = timeGetTime();
    DAT_012586d0 = DVar15 - _DAT_01258b70;
    FUN_00a899f0();
    if (*(char *)(unaff_EBP + 8) == '\0') {
      if (unaff_EBX[0x26] == unaff_EBX[0x25]) {
        iVar7 = unaff_EBX[7];
        *(undefined4 *)(unaff_EBP + -0x44) = 5;
        *(undefined4 *)(unaff_EBP + -0x40) = 0;
        iVar7 = *(int *)(iVar7 + 0x54);
        *(int *)(unaff_EBP + -0x60) = iVar7 >> 0x1f;
        pcVar4 = *(code **)(*unaff_EBX + 0x14);
        *(int *)(unaff_EBP + -0x40) = iVar7;
        *(undefined4 *)(unaff_EBP + -0x44) = 5;
        uStack_1c = CONCAT44(unaff_EBP + -0x44,0xa62dd3);
        (*pcVar4)();
      }
      *(int *)(unaff_EBX[7] + 0x54) = *(int *)(unaff_EBX[7] + 0x54) + 1;
    }
    if (unaff_EBX[0x26] == unaff_EBX[0x25]) {
      unaff_EBX[0x26] = 0;
    }
    else {
      unaff_EBX[0x26] = unaff_EBX[0x26] + 1;
    }
    if (*(char *)(unaff_EBP + -0x11) != '\0') {
      for (puVar11 = *(undefined4 **)(unaff_EBX[7] + 4); puVar11 != (undefined4 *)0x0;
          puVar11 = (undefined4 *)puVar11[2]) {
        (**(code **)(*(int *)*puVar11 + 4))();
      }
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    tbb::internal::NFS_Free(*(void **)(unaff_EBP + -0x74));
    ExceptionList = *(void **)(unaff_EBP + -0xc);
    return;
  }
  switch(*(undefined4 *)(unaff_EBP + -0x3c)) {
  case 0:
    goto switchD_00a618ea_caseD_0;
  case 1:
    (**(code **)(*unaff_EBX + 0x60))();
    goto switchD_00a618ea_caseD_0;
  case 2:
    if (*(int *)(*(int *)(unaff_EBP + -0x38) + 0x14) != 0) {
      uVar10 = FUN_009b0f50();
      *(undefined4 *)(unaff_EBP + -0x18) = uVar10;
      uVar13 = **(uint **)(*(int *)(unaff_EBP + -0x38) + 0x14);
      for (piVar14 = *(int **)(unaff_EBX[0x21] + (uVar13 % (uint)unaff_EBX[0x20]) * 4);
          piVar14 != (int *)0x0; piVar14 = (int *)piVar14[1]) {
        iVar7 = *piVar14;
        if (*(uint *)(iVar7 + 0x1c) == uVar13) goto LAB_00a62a15;
      }
      iVar7 = 0;
LAB_00a62a15:
      uVar10 = *(undefined4 *)(iVar7 + 4);
      *(undefined2 *)(unaff_EBP + -0x60) = *(undefined2 *)(iVar7 + 8);
      *(uint *)(unaff_EBP + -0x108) = uVar13;
      *(undefined4 *)(unaff_EBP + -0x104) = uVar10;
      *(undefined4 *)(unaff_EBP + -0x100) = *(undefined4 *)(unaff_EBP + -0x60);
      FUN_004bec00();
      uVar2 = *(ushort *)(unaff_EBX + 0x23);
      puVar3 = *(uint **)(*(int *)(unaff_EBP + -0x38) + 0x14);
      *(undefined1 *)(unaff_EBP + -0x11) = 1;
      if (((uint)uVar2 == *puVar3) && (*(int *)(unaff_EBP + -0x18) != 0)) {
        *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x18);
        iVar7 = FUN_00a6a9c0();
        if (iVar7 != 0) {
          *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x18);
          FUN_00a6a9c0();
          FUN_00a60e20();
        }
      }
      *(undefined4 *)(unaff_EBP + -0xf8) = **(undefined4 **)(*(int *)(unaff_EBP + -0x38) + 0x14);
      iVar7 = *unaff_EBX;
      uStack_1c._4_4_ = unaff_EBP + -0xfc;
      *(undefined4 *)(unaff_EBP + -0xfc) = 3;
      pcVar4 = *(code **)(iVar7 + 0x14);
      *(undefined4 *)(unaff_EBP + -0x20) = 0;
      uStack_1c._0_4_ = 0xa62ac3;
      (*pcVar4)();
      uStack_1c = CONCAT44(uStack_1c._4_4_,*(undefined4 *)(*(int *)(unaff_EBP + -0x38) + 0x14));
      FUN_00a60580();
      *(undefined4 *)(unaff_EBP + -0x110) = 0xf;
      *(undefined4 *)(unaff_EBP + -0x114) = 0;
      *(undefined1 *)(unaff_EBP + -0x124) = 0;
      FUN_00409350();
      *(undefined1 *)(unaff_EBP + -4) = 0x33;
      uStack_1c = CONCAT44(0xa62b1a,(undefined4)uStack_1c);
      FUN_004015b0();
      *(undefined1 *)(unaff_EBP + -4) = 0x34;
      FUN_00987d20();
      FUN_00401280();
      *(undefined1 *)(unaff_EBP + -4) = 0x33;
      FUN_00987ac0();
      *(undefined ***)(unaff_EBP + -0x534) = std::ios_base::vftable;
      FUN_00aad52d();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      if (0xf < *(uint *)(unaff_EBP + -0x110)) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
    *(undefined4 *)(*(int *)(unaff_EBP + -0x38) + 0x14) = 0;
    goto switchD_00a618ea_caseD_0;
  case 3:
    break;
  default:
    bVar5 = false;
    *(undefined4 *)(unaff_EBP + -0x7c) = 0xf;
    *(undefined4 *)(unaff_EBP + -0x80) = 0;
    *(undefined1 *)(unaff_EBP + -0x90) = 0;
    FUN_00409350();
    *(undefined1 *)(unaff_EBP + -4) = 0x35;
    uStack_1c = CONCAT44(0xa62bd6,(undefined4)uStack_1c);
    FUN_004015b0();
    *(undefined1 *)(unaff_EBP + -4) = 0x36;
    piVar14 = (int *)FUN_00987d20();
    FUN_00408be0();
    if (((*(byte *)(*(int *)(*piVar14 + 4) + 0xc + (int)piVar14) & 6) == 0) &&
       (iVar7 = (**(code **)(**(int **)(*(int *)(*piVar14 + 4) + 0x38 + (int)piVar14) + 0x34))(),
       iVar7 == -1)) {
      bVar5 = true;
    }
    if (bVar5) {
      FUN_00401120();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x35;
    FUN_00987ac0();
    *(undefined ***)(unaff_EBP + -0x5f4) = std::ios_base::vftable;
    FUN_00aad52d();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (0xf < *(uint *)(unaff_EBP + -0x7c)) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    goto switchD_00a618ea_caseD_0;
  }
  if (*(char *)(unaff_EBP + -0x34) == '\x01') {
    *(undefined8 *)(unaff_EBP + -0x4c) = 0;
    puVar11 = *(undefined4 **)(*(int *)(unaff_EBP + -0x2c) + 8);
    uVar10 = *puVar11;
    *(undefined4 *)(unaff_EBP + -0x4c) = uVar10;
    *(undefined4 *)(unaff_EBP + -0x48) = puVar11[1];
    switch(uVar10) {
    case 8:
      cVar6 = FUN_009b1170();
      if (cVar6 == '\0') {
        FUN_009885d0();
        *(undefined1 *)(unaff_EBP + -4) = 1;
        uStack_1c = CONCAT44(0xa61996,(undefined4)uStack_1c);
        FUN_004015b0();
        *(undefined1 *)(unaff_EBP + -4) = 2;
        FUN_00987d20();
        FUN_00401280();
        *(undefined1 *)(unaff_EBP + -4) = 1;
        FUN_00401650();
        *(undefined1 *)(unaff_EBP + -4) = 0;
        FUN_00408ad0();
        uStack_1c = *(longlong *)(unaff_EBP + -0x3c);
        uStack_24 = 0xa619f4;
        FUN_00a60f40();
        goto LAB_00a629a9;
      }
      FUN_009885d0();
      *(undefined1 *)(unaff_EBP + -4) = 3;
      uStack_1c = CONCAT44(0xa61a20,(undefined4)uStack_1c);
      FUN_004015b0();
      *(undefined1 *)(unaff_EBP + -4) = 4;
      FUN_00987d20();
      FUN_00401280();
      *(undefined1 *)(unaff_EBP + -4) = 3;
      FUN_00401650();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_00408ad0();
      *(undefined4 *)(unaff_EBP + -0xf4) = 0x14;
      *(undefined4 *)(unaff_EBP + -0xf0) = 0;
      uStack_1c = CONCAT44(0xa61a7a,(undefined4)uStack_1c);
      FUN_00a89eb0();
      uStack_1c = CONCAT44(1,*(undefined4 *)(unaff_EBP + -0x38));
      iVar7 = FUN_00a89f70();
      if (iVar7 != -1) goto LAB_00a629a9;
      FUN_009885d0();
      *(undefined1 *)(unaff_EBP + -4) = 5;
      uStack_1c = CONCAT44(0xa61abf,(undefined4)uStack_1c);
      FUN_004015b0();
      *(undefined1 *)(unaff_EBP + -4) = 6;
      uStack_1c = CONCAT44(0xa61ae3,(undefined4)uStack_1c);
      uStack_1c._4_4_ = FUN_00987d20();
      uStack_1c._0_4_ = 0xa61ae9;
      uVar10 = FUN_00447240();
      uStack_1c = CONCAT44(uStack_1c._4_4_,uVar10);
      uVar10 = FUN_00418e30();
      uStack_1c = CONCAT44(uVar10,0xa61af8);
      FUN_009da180();
      FUN_00401280();
      *(undefined1 *)(unaff_EBP + -4) = 5;
      FUN_00401650();
      break;
    case 9:
      if (*(char *)(unaff_EBP + 8) == '\0') {
        iVar7 = *unaff_EBX;
        *(undefined4 *)(unaff_EBP + -0x4c) = 0xb;
        *(undefined4 *)(unaff_EBP + -0x48) = 0;
        uStack_1c = CONCAT44(0xa61b67,(undefined4)uStack_1c);
        FUN_00a603d0();
        uStack_1c = CONCAT44(unaff_EBP + -0x4c,0xa61b75);
        (**(code **)(iVar7 + 0x14))();
      }
      else {
        uStack_1c = *(longlong *)(unaff_EBP + -0x3c);
        uStack_24 = 0xa61b41;
        FUN_00a61410();
      }
      goto LAB_00a629a9;
    default:
      *(undefined4 *)(unaff_EBP + -0xbc) = 0xf;
      *(undefined4 *)(unaff_EBP + -0xc0) = 0;
      *(undefined1 *)(unaff_EBP + -0xd0) = 0;
      FUN_00409350();
      *(undefined1 *)(unaff_EBP + -4) = 0x21;
      uStack_1c = CONCAT44(0xa623ab,(undefined4)uStack_1c);
      FUN_004015b0();
      *(undefined1 *)(unaff_EBP + -4) = 0x22;
      FUN_00987d20();
      FUN_00401280();
      *(undefined1 *)(unaff_EBP + -4) = 0x21;
      FUN_00987ac0();
      *(undefined ***)(unaff_EBP + -0x6b4) = std::ios_base::vftable;
      FUN_00aad52d();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      if (0xf < *(uint *)(unaff_EBP + -0xbc)) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      *(undefined4 *)(unaff_EBP + -0xbc) = 0xf;
      *(undefined4 *)(unaff_EBP + -0xc0) = 0;
      *(undefined1 *)(unaff_EBP + -0xd0) = 0;
      goto LAB_00a629a9;
    case 0xc:
      FUN_009885d0();
      *(undefined1 *)(unaff_EBP + -4) = 0x16;
      uStack_1c = CONCAT44(0xa61fe5,(undefined4)uStack_1c);
      FUN_004015b0();
      *(undefined1 *)(unaff_EBP + -4) = 0x17;
      FUN_00987d20();
      FUN_00401280();
      *(undefined1 *)(unaff_EBP + -4) = 0x16;
      FUN_00401650();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_00408ad0();
      iVar7 = *(int *)(unaff_EBX[7] + 0x30);
      *(int *)(unaff_EBP + -0x20) = iVar7 >> 0x1f;
      *(undefined4 *)(unaff_EBP + -0x4c) = 0x11;
      *(int *)(unaff_EBP + -0x48) = iVar7;
      uStack_1c = CONCAT44(0xa62041,(undefined4)uStack_1c);
      FUN_00a89eb0();
      uStack_1c = CONCAT44(1,*(undefined4 *)(unaff_EBP + -0x38));
      iVar7 = FUN_00a89f70();
      if (iVar7 != -1) goto LAB_00a629a9;
      FUN_009885d0();
      *(undefined1 *)(unaff_EBP + -4) = 0x18;
      uStack_1c = CONCAT44(0xa62086,(undefined4)uStack_1c);
      FUN_004015b0();
      *(undefined1 *)(unaff_EBP + -4) = 0x19;
      uStack_1c = CONCAT44(0xa620aa,(undefined4)uStack_1c);
      uStack_1c._4_4_ = FUN_00987d20();
      uStack_1c._0_4_ = 0xa620b0;
      uVar10 = FUN_00447240();
      uStack_1c = CONCAT44(uStack_1c._4_4_,uVar10);
      uVar10 = FUN_00418e30();
      uStack_1c = CONCAT44(uVar10,0xa620bf);
      FUN_009da180();
      FUN_00401280();
      *(undefined1 *)(unaff_EBP + -4) = 0x18;
      FUN_00401650();
      break;
    case 0xd:
      iVar7 = FUN_00aae9af();
      if (iVar7 == 0) {
        uVar10 = 0;
        *(undefined4 *)(unaff_EBP + -0x28) = 0;
      }
      else {
        uVar10 = FUN_009d6e00();
        *(undefined4 *)(unaff_EBP + -0x28) = uVar10;
      }
      iVar7 = FUN_00aae9af();
      *(int *)(unaff_EBP + -0x20) = iVar7;
      *(undefined1 *)(unaff_EBP + -4) = 7;
      if (iVar7 == 0) {
        iVar7 = 0;
      }
      else {
        uStack_1c = CONCAT44(uVar10,iVar7);
        iVar7 = FUN_009d5450();
      }
      cVar6 = *(char *)(iVar7 + 0x13);
      *(undefined ***)(unaff_EBP + -0xb4) = &PTR_FUN_00e38528;
      *(undefined4 *)(unaff_EBP + -0xb0) = 0;
      *(undefined1 *)(unaff_EBP + -0xa7) = 1;
      *(bool *)(unaff_EBP + -0xa8) = cVar6 != '\0';
      *(int *)(unaff_EBP + -0xac) = iVar7;
      *(undefined1 *)(unaff_EBP + -4) = 8;
      iVar7 = unaff_EBX[7];
      FUN_009a0940();
      (**(code **)(*(int *)(iVar7 + 0x1c0) + 4))();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_0099eff0();
      *(undefined4 *)(unaff_EBP + -0x54) = 0x15;
      *(undefined4 *)(unaff_EBP + -0x50) = 0;
      iVar7 = FUN_00aae9af();
      if (iVar7 == 0) {
        puVar11 = (undefined4 *)0x0;
      }
      else {
        puVar11 = (undefined4 *)FUN_009d6e00();
      }
      uStack_1c = CONCAT44(unaff_EBP + -0x54,puVar11[1]);
      FUN_009d7490();
      uStack_1c = CONCAT44(**(undefined4 **)(unaff_EBP + -0x28),puVar11[1]);
      FUN_009d7490();
      FUN_0076cbc0();
      uStack_1c._4_4_ = *puVar11;
      uStack_1c._0_4_ = 0xa61c95;
      FUN_00a89eb0();
      uStack_1c = CONCAT44(uStack_1c._4_4_,1);
      uStack_24 = 0xa61ca2;
      iVar7 = FUN_00a89f70();
      if (iVar7 == -1) {
        FUN_009885d0();
        *(undefined1 *)(unaff_EBP + -4) = 9;
        uStack_1c = CONCAT44(unaff_EBP + -600,0xa61cd6);
        FUN_004015b0();
        *(undefined1 *)(unaff_EBP + -4) = 10;
        FUN_00987d20();
        FUN_00401280();
        *(undefined1 *)(unaff_EBP + -4) = 9;
        FUN_00401650();
        *(undefined1 *)(unaff_EBP + -4) = 0;
        FUN_00408ad0();
      }
      FUN_0076cbc0();
      FUN_009885d0();
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      uStack_1c = CONCAT44(0xa61d43,(undefined4)uStack_1c);
      FUN_004015b0();
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      FUN_00987d20();
      FUN_00401280();
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      FUN_00401650();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_00408ad0();
      iVar7 = *(int *)(unaff_EBX[7] + 0x30);
      *(int *)(unaff_EBP + -0x20) = iVar7 >> 0x1f;
      *(undefined4 *)(unaff_EBP + -0x54) = 0x11;
      *(int *)(unaff_EBP + -0x50) = iVar7;
      uStack_1c = CONCAT44(0xa61d9f,(undefined4)uStack_1c);
      FUN_00a89eb0();
      uStack_1c = CONCAT44(1,*(undefined4 *)(unaff_EBP + -0x38));
      iVar7 = FUN_00a89f70();
      if (iVar7 != -1) goto LAB_00a629a9;
      FUN_009885d0();
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      uStack_1c = CONCAT44(0xa61de4,(undefined4)uStack_1c);
      FUN_004015b0();
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      uStack_1c = CONCAT44(0xa61e08,(undefined4)uStack_1c);
      uStack_1c._4_4_ = FUN_00987d20();
      uStack_1c._0_4_ = 0xa61e0e;
      uVar10 = FUN_00447240();
      uStack_1c = CONCAT44(uStack_1c._4_4_,uVar10);
      uVar10 = FUN_00418e30();
      uStack_1c = CONCAT44(uVar10,0xa61e1d);
      FUN_009da180();
      FUN_00401280();
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      FUN_00401650();
      break;
    case 0xe:
      iVar7 = FUN_00aae9af();
      *(int *)(unaff_EBP + -0x20) = iVar7;
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      if (iVar7 == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = FUN_009d6ea0();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      uStack_1c = CONCAT44(*(undefined4 *)(iVar7 + 4),0xa61e91);
      FUN_009d7490();
      FUN_009885d0();
      *(undefined1 *)(unaff_EBP + -4) = 0x10;
      iVar9 = FUN_00aae9af();
      *(int *)(unaff_EBP + -0x20) = iVar9;
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      if (iVar9 != 0) {
        iVar9 = FUN_00aae9af();
        *(int *)(unaff_EBP + -0x1c) = iVar9;
        *(undefined1 *)(unaff_EBP + -4) = 0x12;
        if (iVar9 == 0) {
          *(undefined1 *)(unaff_EBP + -4) = 0x11;
          FUN_00990df0();
        }
        else {
          uStack_1c = CONCAT44(iVar7,iVar9);
          FUN_009d5450();
          *(undefined1 *)(unaff_EBP + -4) = 0x11;
          FUN_00990df0();
        }
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x10;
      uStack_1c = CONCAT44(0xa61f1a,(undefined4)uStack_1c);
      FUN_009a0bf0();
      *(undefined1 *)(unaff_EBP + -4) = 0x14;
      FUN_00408ad0();
      FUN_009a1440();
      *(undefined4 *)(unaff_EBP + -300) = 0xf;
      *(undefined4 *)(unaff_EBP + -0x130) = 0;
      *(undefined1 *)(unaff_EBP + -0x140) = 0;
      *(undefined1 *)(unaff_EBP + -4) = 0x15;
      FUN_009a1750();
      uStack_1c = CONCAT44(0xa61f81,(undefined4)uStack_1c);
      FUN_00408ed0();
      *(undefined4 *)(unaff_EBX[7] + 0x254) = *(undefined4 *)(unaff_EBP + -0x38);
      FUN_009ae5d0();
      FUN_00408ad0();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_009a0dc0();
      goto LAB_00a629a9;
    case 0x18:
      FUN_009885d0();
      *(undefined1 *)(unaff_EBP + -4) = 0x1a;
      uStack_1c = CONCAT44(0xa6210e,(undefined4)uStack_1c);
      FUN_004015b0();
      *(undefined1 *)(unaff_EBP + -4) = 0x1b;
      FUN_00987d20();
      FUN_00401280();
      *(undefined1 *)(unaff_EBP + -4) = 0x1a;
      FUN_00401650();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_00408ad0();
      iVar7 = *(int *)(unaff_EBX[7] + 0x30);
      *(int *)(unaff_EBP + -0x20) = iVar7 >> 0x1f;
      *(undefined4 *)(unaff_EBP + -0x44) = 0x11;
      *(int *)(unaff_EBP + -0x40) = iVar7;
      uStack_1c = CONCAT44(0xa6216a,(undefined4)uStack_1c);
      FUN_00a89eb0();
      uStack_1c = CONCAT44(1,*(undefined4 *)(unaff_EBP + -0x38));
      iVar7 = FUN_00a89f70();
      if (iVar7 == -1) {
        FUN_009885d0();
        *(undefined1 *)(unaff_EBP + -4) = 0x1c;
        uStack_1c = CONCAT44(0xa621af,(undefined4)uStack_1c);
        FUN_004015b0();
        *(undefined1 *)(unaff_EBP + -4) = 0x1d;
        uStack_1c = CONCAT44(0xa621d3,(undefined4)uStack_1c);
        uStack_1c._4_4_ = FUN_00987d20();
        uStack_1c._0_4_ = 0xa621d9;
        uVar10 = FUN_00447240();
        uStack_1c = CONCAT44(uStack_1c._4_4_,uVar10);
        uVar10 = FUN_00418e30();
        uStack_1c = CONCAT44(uVar10,0xa621e8);
        FUN_009da180();
        FUN_00401280();
        *(undefined1 *)(unaff_EBP + -4) = 0x1c;
        FUN_00401650();
        *(undefined1 *)(unaff_EBP + -4) = 0;
        FUN_00408ad0();
      }
      FUN_00648af0();
      *(undefined1 *)(unaff_EBP + -4) = 0x1e;
      *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x308) >> 0x1f;
      *(undefined4 *)(unaff_EBP + -0x44) = 0x17;
      *(int *)(unaff_EBP + -0x40) = *(int *)(unaff_EBP + -0x308);
      uStack_1c = CONCAT44(0xa6224a,(undefined4)uStack_1c);
      FUN_00a89eb0();
      uStack_1c = CONCAT44(1,*(undefined4 *)(unaff_EBP + -0x38));
      FUN_00a89f70();
      pcVar8 = *(char **)(unaff_EBP + -0x348);
      if (*(uint *)(unaff_EBP + -0x334) < 0x10) {
        pcVar8 = (char *)(unaff_EBP + -0x348);
      }
      pcVar1 = pcVar8 + 1;
      do {
        cVar6 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar6 != '\0');
      _Dst = (void *)FUN_00aad56b();
      _Src = *(void **)(unaff_EBP + -0x348);
      if (*(uint *)(unaff_EBP + -0x334) < 0x10) {
        _Src = (void *)(unaff_EBP + -0x348);
      }
      uStack_1c = CONCAT44(0xa622a5,(undefined4)uStack_1c);
      FID_conflict__memcpy(_Dst,_Src,(int)pcVar8 - (int)pcVar1);
      uStack_1c = CONCAT44(1,(int)pcVar8 - (int)pcVar1);
      uStack_24 = 0xa622ae;
      FUN_00a89eb0();
      uStack_24 = 1;
      iVar7 = FUN_00a89f70(*(undefined4 *)(unaff_EBP + -0x38));
      if (iVar7 == -1) {
        FUN_009885d0();
        *(undefined1 *)(unaff_EBP + -4) = 0x1f;
        uStack_1c = CONCAT44(0xa622f3,(undefined4)uStack_1c);
        FUN_004015b0();
        *(undefined1 *)(unaff_EBP + -4) = 0x20;
        uStack_1c = CONCAT44(0xa62317,(undefined4)uStack_1c);
        uStack_1c._4_4_ = FUN_00987d20();
        uStack_1c._0_4_ = 0xa6231d;
        uVar10 = FUN_00447240();
        uStack_1c = CONCAT44(uStack_1c._4_4_,uVar10);
        uVar10 = FUN_00418e30();
        uStack_1c = CONCAT44(uVar10,0xa6232c);
        FUN_009da180();
        FUN_00401280();
        *(undefined1 *)(unaff_EBP + -4) = 0x1f;
        FUN_00401650();
        FUN_00408ad0();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_00648a60();
      goto LAB_00a629a9;
    }
  }
  else {
    if (*(char *)(unaff_EBP + -0x34) != '\0') goto LAB_00a629a9;
    *(undefined4 *)(unaff_EBP + -0xd8) = 0xf;
    *(undefined4 *)(unaff_EBP + -0xdc) = 0;
    *(undefined1 *)(unaff_EBP + -0xec) = 0;
    FUN_00409350();
    *(undefined1 *)(unaff_EBP + -4) = 0x23;
    uStack_1c = CONCAT44(0xa6247b,(undefined4)uStack_1c);
    FUN_004015b0();
    *(undefined1 *)(unaff_EBP + -4) = 0x24;
    FUN_00987d20();
    FUN_00401280();
    *(undefined1 *)(unaff_EBP + -4) = 0x23;
    FUN_00987ac0();
    *(undefined ***)(unaff_EBP + -0x474) = std::ios_base::vftable;
    FUN_00aad52d();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (0xf < *(uint *)(unaff_EBP + -0xd8)) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    *(undefined4 *)(unaff_EBP + -0xd8) = 0xf;
    *(undefined4 *)(unaff_EBP + -0xdc) = 0;
    *(undefined1 *)(unaff_EBP + -0xec) = 0;
    iVar7 = FUN_00aae9af();
    *(int *)(unaff_EBP + -0x20) = iVar7;
    *(undefined1 *)(unaff_EBP + -4) = 0x25;
    if (iVar7 == 0) {
      iVar7 = 0;
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
    }
    else {
      iVar7 = FUN_009d6ea0();
      *(int *)(unaff_EBP + -0x18) = iVar7;
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    uStack_1c = CONCAT44(*(undefined4 *)(iVar7 + 4),0xa6253f);
    FUN_009d7490();
    *(undefined4 *)(unaff_EBP + -0x28) = 0;
    iVar9 = FUN_00aae9af();
    *(int *)(unaff_EBP + -0x20) = iVar9;
    *(undefined1 *)(unaff_EBP + -4) = 0x26;
    if (iVar9 == 0) {
      *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    }
    else {
      iVar9 = FUN_00aae9af();
      *(int *)(unaff_EBP + -0x1c) = iVar9;
      *(undefined1 *)(unaff_EBP + -4) = 0x27;
      if (iVar9 == 0) {
        *(undefined1 *)(unaff_EBP + -4) = 0x26;
        uVar10 = FUN_00990df0();
        *(undefined4 *)(unaff_EBP + -0x1c) = uVar10;
      }
      else {
        uStack_1c = CONCAT44(iVar7,iVar9);
        FUN_009d5450();
        *(undefined1 *)(unaff_EBP + -4) = 0x26;
        uVar10 = FUN_00990df0();
        *(undefined4 *)(unaff_EBP + -0x1c) = uVar10;
      }
    }
    *(undefined8 **)(unaff_EBP + -0x20) = &uStack_1c;
    *(undefined8 **)(unaff_EBP + -0x20) = &uStack_1c;
    uStack_1c = 0;
    *(undefined1 *)(unaff_EBP + -4) = 0x28;
    uStack_24 = 0xa625da;
    FUN_009a2240();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    uStack_24 = unaff_EBP - 0x138c;
    FUN_009a0cb0();
    *(undefined ***)(unaff_EBP + -0x58) = &PTR_FUN_00e38550;
    *(undefined1 *)(unaff_EBP + -4) = 0x2a;
    iVar7 = unaff_EBX[7];
    *(uint **)(unaff_EBP + -0x20) = &uStack_24;
    uStack_24 = uStack_24 & 0xffffff00;
    FUN_00408ed0(iVar7 + 0xbc,0,0xffffffff);
    FUN_009a14e0(unaff_EBP + -0x28);
    *(undefined ***)(unaff_EBP + -0x58) = &PTR_FUN_00e38318;
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_009a0dc0();
    piVar14 = *(int **)(unaff_EBP + -0x28);
    cVar6 = (**(code **)(*piVar14 + 0x38))();
    if (cVar6 != '\0') goto code_r0x00a6265e;
    FUN_009885d0();
    *(undefined1 *)(unaff_EBP + -4) = 0x31;
    uStack_1c = CONCAT44(0xa62917,(undefined4)uStack_1c);
    FUN_004015b0();
    *(undefined1 *)(unaff_EBP + -4) = 0x32;
    uStack_1c = CONCAT44("; Sent: ",piVar14[0xb]);
    FUN_00987d20();
    uStack_24 = 0xa6294a;
    uStack_24 = FUN_00447240();
    FUN_00418e30();
    uStack_24 = 0xa62959;
    uStack_24 = FUN_00455470();
    FUN_00418e30();
    uStack_24 = 0xa62968;
    FUN_00455470();
    FUN_00401280();
    *(undefined1 *)(unaff_EBP + -4) = 0x31;
    FUN_00987ac0();
    *(undefined ***)(unaff_EBP + -0x774) = std::ios_base::vftable;
    FUN_00aad52d();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00408ad0();
  goto LAB_00a629a9;
code_r0x00a6265e:
  *(undefined4 *)(unaff_EBP + -0x1c) = **(undefined4 **)(*(int *)(unaff_EBP + -0x38) + 0x14);
  iVar7 = FUN_00a6a9c0();
  uVar10 = *(undefined4 *)(iVar7 + 0x10);
  *(int *)(unaff_EBP + -0x20) = piVar14[0xe];
  *(undefined4 *)(unaff_EBP + -0x1c) = uVar10;
  puVar11 = (undefined4 *)FUN_00aae9af();
  if (puVar11 == (undefined4 *)0x0) {
    puVar11 = (undefined4 *)0x0;
  }
  else {
    uVar10 = *(undefined4 *)(unaff_EBP + -0x1c);
    *puVar11 = *(undefined4 *)(unaff_EBP + -0x20);
    puVar11[1] = uVar10;
    puVar11[2] = 0;
    *(undefined1 *)(puVar11 + 3) = 0;
  }
  iVar9 = *(int *)(iVar7 + 0x14);
  *(int *)(iVar7 + 0x14) = iVar9 + 1;
  *(undefined4 **)(iVar7 + 0x10) = puVar11;
  if (iVar9 == 0) {
    *(undefined4 **)(iVar7 + 0xc) = puVar11;
  }
  else {
    *(undefined4 **)(*(int *)(unaff_EBP + -0x1c) + 8) = puVar11;
  }
  if ((unaff_EBX[0x2b] < *(int *)(iVar7 + 0x14)) && (iVar9 = *(int *)(iVar7 + 0xc), iVar9 != 0)) {
    if (*(char *)(iVar7 + 0x18) == '\0') {
      iVar9 = *(int *)(iVar9 + 8);
      *(int *)(iVar7 + 0xc) = iVar9;
      if (iVar9 == 0) {
        *(undefined4 *)(iVar7 + 0x10) = 0;
      }
      else {
        *(undefined4 *)(iVar9 + 4) = 0;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    *(undefined1 *)(iVar9 + 0xc) = 1;
  }
  if (*(char *)((int)piVar14 + 0x36) == '\0') {
    *(int **)(unaff_EBP + -0x20) = unaff_EBX + 0x2a;
    piVar12 = *(int **)(unaff_EBP + -0x20);
    LOCK();
    iVar7 = *piVar12;
    *piVar12 = *piVar12 + 1;
    UNLOCK();
    *(int *)(unaff_EBP + -0x5c) = iVar7;
    piVar14[0xe] = *(int *)(unaff_EBP + -0x5c);
  }
  puVar11 = (undefined4 *)unaff_EBX[0x15];
  *(undefined4 *)(unaff_EBP + -0x1c) = puVar11[1];
  piVar12 = (int *)FUN_00aae9af();
  if (piVar12 == (int *)0x0) {
    piVar12 = (int *)0x0;
  }
  else {
    iVar7 = *(int *)(unaff_EBP + -0x1c);
    *piVar12 = (int)piVar14;
    piVar12[1] = iVar7;
    piVar12[2] = 0;
    *(undefined1 *)(piVar12 + 3) = 0;
  }
  iVar7 = puVar11[2];
  puVar11[1] = piVar12;
  puVar11[2] = iVar7 + 1;
  if (iVar7 == 0) {
    *puVar11 = piVar12;
  }
  else {
    *(int **)(*(int *)(unaff_EBP + -0x1c) + 8) = piVar12;
  }
  if (*(char *)((int)piVar14 + 0x36) == '\0') {
    FUN_0076cbc0();
    iVar7 = FUN_00aae9af();
    if (iVar7 == 0) {
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
    }
    else {
      uVar10 = FUN_009d6e00();
      *(undefined4 *)(unaff_EBP + -0x18) = uVar10;
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x2b;
    iVar7 = FUN_00aae9af();
    *(int *)(unaff_EBP + -0x20) = iVar7;
    *(undefined1 *)(unaff_EBP + -4) = 0x2c;
    if (iVar7 == 0) {
      iVar7 = 0;
    }
    else {
      uStack_1c = CONCAT44(*(undefined4 *)(unaff_EBP + -0x18),iVar7);
      iVar7 = FUN_009d5450();
    }
    *(undefined ***)(unaff_EBP + -0xa0) = &PTR_FUN_00e38528;
    *(undefined4 *)(unaff_EBP + -0x9c) = 0;
    *(undefined1 *)(unaff_EBP + -0x93) = 1;
    cVar6 = *(char *)(iVar7 + 0x13);
    *(int *)(unaff_EBP + -0x98) = iVar7;
    *(bool *)(unaff_EBP + -0x94) = cVar6 != '\0';
    *(undefined1 *)(unaff_EBP + -4) = 0x2d;
    (**(code **)(*piVar14 + 0x1c))();
    FUN_009a0940();
    (**(code **)(*piVar14 + 4))();
    *(undefined1 *)(unaff_EBP + -4) = 0x2b;
    FUN_0099eff0();
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_00a62847();
    return;
  }
  goto LAB_00a628e1;
}

