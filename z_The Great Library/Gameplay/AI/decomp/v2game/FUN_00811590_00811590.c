// FUN_00811590 @ 00811590 body=[[00811590, 008115e6] [008115f4, 00811650] [00811654, 008116aa]]


void FUN_00811590(void)

{
  void *_Dst;
  int *piVar1;
  int *piVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int unaff_ESI;
  uint uVar6;
  uint local_8;
  
  local_8 = local_8 & 0xffffff00;
  FUN_00815ea0(*(undefined4 *)(unaff_ESI + 0x44),local_8);
  _Dst = *(void **)(unaff_ESI + 0x40);
  if (_Dst != *(void **)(unaff_ESI + 0x44)) {
    FID_conflict__memcpy(_Dst,*(void **)(unaff_ESI + 0x44),0);
    *(void **)(unaff_ESI + 0x44) = _Dst;
  }
  if (*(int *)(unaff_ESI + 0xb4) == 0) {
    puVar5 = *(undefined4 **)(unaff_ESI + 0x50);
    if (puVar5 != *(undefined4 **)(unaff_ESI + 0x54)) {
      do {
        piVar1 = (int *)*puVar5;
        if (piVar1 != (int *)0x0) {
          piVar2 = (int *)*piVar1;
          if (piVar2 != (int *)0x0) {
            (**(code **)(*piVar2 + 8))(piVar2);
          }
          piVar2 = (int *)piVar1[1];
          if (piVar2 != (int *)0x0) {
            (**(code **)(*piVar2 + 8))(piVar2);
          }
          piVar2 = (int *)piVar1[2];
          if (piVar2 != (int *)0x0) {
            (**(code **)(*piVar2 + 8))(piVar2);
          }
          piVar1[2] = 0;
          *piVar1 = 0;
          piVar1[1] = 0;
          piVar1[3] = 0;
          piVar1[4] = 0;
          piVar1[7] = 0;
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(piVar1);
        }
        puVar5 = puVar5 + 1;
      } while (puVar5 != *(undefined4 **)(unaff_ESI + 0x54));
    }
    uVar6 = 0;
    if (*(int *)(unaff_ESI + 0x14) != 0) {
      do {
        FUN_008116b0();
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(uint *)(unaff_ESI + 0x14));
    }
    uVar6 = *(int *)(unaff_ESI + 0x44) - *(int *)(unaff_ESI + 0x40) >> 2;
    if ((uVar6 != 0) && (*(int *)(unaff_ESI + 0xb4) == 0)) {
      lVar3 = (ulonglong)uVar6 * 4;
      uVar4 = FUN_00aad56b(-(uint)((int)((ulonglong)lVar3 >> 0x20) != 0) | (uint)lVar3);
      *(undefined4 *)(unaff_ESI + 0xb4) = uVar4;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(*(int *)(unaff_ESI + 0xb4));
}

