// FUN_00a67f40 @ 00a67f40 body=[[00a67f40, 00a6806d] [00a68071, 00a6818d] [00a68191, 00a681ed]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a67f40(void)

{
  char cVar1;
  undefined4 *_Src;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *_Dst;
  int *piVar5;
  uint uVar6;
  DWORD DVar7;
  undefined4 *unaff_EBX;
  int unaff_EBP;
  int unaff_EDI;
  size_t _Size;
  
  do {
    piVar5 = *(int **)(unaff_EDI + 0x100);
    if ((piVar5[0x20] == piVar5[0x20]) && (piVar5[0x20] == piVar5[0x42] + *piVar5)) {
      ExceptionList = *(void **)(unaff_EBP + -0xc);
      return;
    }
    *(undefined4 **)(unaff_EBP + -0x14) = unaff_EBX;
    cVar2 = FUN_00a6ab10(unaff_EDI + 0xfc,unaff_EBP + -0x14);
  } while (cVar2 == '\0');
  puVar3 = *(undefined4 **)(*(int *)(unaff_EDI + 0x1c) + 0x54);
  piVar5 = *(int **)(unaff_EBP + -0x14);
  if (0x7fff < (int)puVar3) {
    puVar3 = unaff_EBX;
  }
  *(short *)(piVar5 + 0xd) = (short)puVar3;
  *(undefined4 *)(unaff_EDI + 0xec) = *(undefined4 *)(*(int *)(unaff_EDI + 0x1c) + 0x54);
  *(undefined1 *)(unaff_EDI + 0xf0) = 1;
  *(undefined4 **)(unaff_EBP + -0x6c) = unaff_EBX;
  *(undefined4 **)(unaff_EBP + -0x68) = unaff_EBX;
  *(undefined4 **)(unaff_EBP + -100) = unaff_EBX;
  *(undefined4 **)(unaff_EBP + -0x5c) = unaff_EBX;
  *(undefined4 **)(unaff_EBP + -0x58) = unaff_EBX;
  *(undefined4 **)(unaff_EBP + -0x54) = unaff_EBX;
  *(undefined4 *)(unaff_EBP + -0x38) = 0xf;
  *(undefined4 **)(unaff_EBP + -0x3c) = unaff_EBX;
  cVar2 = (char)unaff_EBX;
  *(char *)(unaff_EBP + -0x4c) = cVar2;
  *(undefined4 *)(unaff_EBP + -4) = 2;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  puVar3 = (undefined4 *)FUN_00aae9af(0x3c);
  *(undefined4 **)(unaff_EBP + -0x20) = puVar3;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (puVar3 == unaff_EBX) {
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_009d5450(puVar3,unaff_EBP + -0x6c,1,unaff_EBX,unaff_EBX);
  }
  *(undefined ***)(unaff_EBP + -0x30) = &PTR_FUN_00e38528;
  *(undefined4 **)(unaff_EBP + -0x2c) = unaff_EBX;
  *(undefined1 *)(unaff_EBP + -0x23) = 1;
  cVar1 = *(char *)(iVar4 + 0x13);
  *(int *)(unaff_EBP + -0x28) = iVar4;
  *(bool *)(unaff_EBP + -0x24) = cVar1 != cVar2;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  (**(code **)(*piVar5 + 0x1c))();
  FUN_009a0940(unaff_EBP + -0x30);
  (**(code **)(*piVar5 + 4))(unaff_EBP + -0x30);
  _Size = *(int *)(unaff_EBP + -0x68) - *(int *)(unaff_EBP + -0x6c);
  *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x6c);
  puVar3 = (undefined4 *)(*(code *)PTR__malloc_00f071f8)(0x10);
  if (puVar3 == unaff_EBX) {
                    /* WARNING: Subroutine does not return */
    _abort();
  }
  _Dst = (undefined4 *)(*(code *)PTR__malloc_00f071f8)(_Size);
  *(undefined4 **)(unaff_EBP + -0x1c) = _Dst;
  if (_Dst == unaff_EBX) {
                    /* WARNING: Subroutine does not return */
    _abort();
  }
  _Src = *(undefined4 **)(unaff_EBP + -0x20);
  puVar3[2] = _Dst;
  if (_Src != unaff_EBX) {
    FID_conflict__memcpy(_Dst,_Src,_Size);
  }
  iVar4 = *(int *)(unaff_EBP + -0x18);
  *puVar3 = unaff_EBX;
  puVar3[1] = 1;
  puVar3[3] = _Size;
  iVar4 = FUN_00a89f70(*(undefined4 *)(*(int *)(iVar4 + 0x18) + 0x20));
  if (iVar4 == -1) {
    *(undefined4 *)(unaff_EBP + -0x74) = 0xf;
    *(undefined4 **)(unaff_EBP + -0x78) = unaff_EBX;
    *(char *)(unaff_EBP + -0x88) = cVar2;
    FUN_00409350("server.cpp",10);
    *(undefined1 *)(unaff_EBP + -4) = 6;
    FUN_004015b0(unaff_EBP + -0x88,0x894,0x301);
    *(undefined1 *)(unaff_EBP + -4) = 7;
    piVar5 = (int *)FUN_00987d20();
    FUN_00408be0(piVar5);
    puVar3 = (undefined4 *)0x0;
    if ((*(byte *)(*(int *)(*piVar5 + 4) + 0xc + (int)piVar5) & 6) == 0) {
      iVar4 = (**(code **)(**(int **)(*(int *)(*piVar5 + 4) + 0x38 + (int)piVar5) + 0x34))();
      if (iVar4 == -1) {
        puVar3 = (undefined4 *)0x4;
      }
    }
    if (puVar3 != unaff_EBX) {
      uVar6 = *(uint *)((int)piVar5 + *(int *)(*piVar5 + 4) + 0xc) | (uint)puVar3;
      if (*(undefined4 **)((int)piVar5 + *(int *)(*piVar5 + 4) + 0x38) == unaff_EBX) {
        uVar6 = uVar6 | 4;
      }
      FUN_00401120(uVar6,unaff_EBX);
    }
    *(undefined1 *)(unaff_EBP + -4) = 6;
    FUN_00987ac0(unaff_EBP + -0x1ac);
    *(undefined ***)(unaff_EBP + -0x1ac) = std::ios_base::vftable;
    FUN_00aad52d(unaff_EBP + -0x1ac);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    if (0xf < *(uint *)(unaff_EBP + -0x74)) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(*(undefined4 *)(unaff_EBP + -0x88));
    }
    *(undefined4 *)(unaff_EBP + -0x74) = 0xf;
    *(undefined4 **)(unaff_EBP + -0x78) = unaff_EBX;
    *(char *)(unaff_EBP + -0x88) = cVar2;
  }
  DVar7 = timeGetTime();
  DAT_012586d0 = DVar7 - _DAT_01258b70;
  FUN_00a899f0();
  (**(code **)**(undefined4 **)(unaff_EBP + -0x14))(1);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  *(undefined ***)(unaff_EBP + -0x30) = &PTR_FUN_00e38528;
  if ((*(undefined4 **)(unaff_EBP + -0x28) != unaff_EBX) && (*(char *)(unaff_EBP + -0x23) != cVar2))
  {
    (**(code **)**(undefined4 **)(unaff_EBP + -0x28))(1);
    FUN_00a68201();
    return;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (0xf < *(uint *)(unaff_EBP + -0x38)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(unaff_EBP + -0x4c));
  }
  *(undefined4 *)(unaff_EBP + -0x38) = 0xf;
  *(undefined4 **)(unaff_EBP + -0x3c) = unaff_EBX;
  *(char *)(unaff_EBP + -0x4c) = cVar2;
  if (*(undefined4 **)(unaff_EBP + -0x5c) != unaff_EBX) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 **)(unaff_EBP + -0x5c));
  }
  *(undefined4 **)(unaff_EBP + -0x5c) = unaff_EBX;
  *(undefined4 **)(unaff_EBP + -0x58) = unaff_EBX;
  *(undefined4 **)(unaff_EBP + -0x54) = unaff_EBX;
  if (*(undefined4 **)(unaff_EBP + -0x6c) != unaff_EBX) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 **)(unaff_EBP + -0x6c));
  }
  *(undefined4 **)(unaff_EBP + -0x6c) = unaff_EBX;
  *(undefined4 **)(unaff_EBP + -0x68) = unaff_EBX;
  *(undefined4 **)(unaff_EBP + -100) = unaff_EBX;
  FUN_00a67f40();
  return;
}

