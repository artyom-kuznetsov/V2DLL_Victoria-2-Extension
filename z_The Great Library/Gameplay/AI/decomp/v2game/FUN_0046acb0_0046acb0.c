// FUN_0046acb0 @ 0046acb0 body=[[0046acb0, 0046ad16] [0046ad20, 0046adbc] [0046adc0, 0046af93]]


/* WARNING: Removing unreachable block (ram,0x0046ae30) */

uint FUN_0046acb0(undefined4 param_1,int *param_2,int param_3,uint *param_4)

{
  void *_Src;
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  char cVar6;
  uint in_EAX;
  int *piVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  void *_Dst;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  undefined8 uVar17;
  undefined4 uVar18;
  int local_48;
  uint local_38;
  int local_34;
  int iStack_2c;
  
  if (*(int *)(param_3 + 0x338) < 1) {
    return in_EAX & 0xffffff00;
  }
  iVar1 = *(int *)(DAT_012588e8 + 0xbcc);
  lVar16 = FUN_00b31c36();
  piVar7 = (int *)(DAT_012587f0 + 0xc);
  iVar11 = *(int *)(DAT_012587f0 + 0x10) - *(int *)(DAT_012587f0 + 0xc) >> 2;
  local_48 = 0;
  if (0 < iVar11) {
    do {
      iVar10 = *(int *)(*piVar7 + local_48 * 4);
      iVar14 = *(int *)(iVar10 + 8);
      uVar12 = (uint)*(byte *)(iVar14 + 0x3a4 + iVar1);
      iVar2 = *(int *)(*(int *)(iVar1 + 0x3e4) + 4 + uVar12 * 8);
      if ((-1 < iVar2) &&
         (((0 < iVar2 || (*(int *)(*(int *)(iVar1 + 0x3e4) + uVar12 * 8) != 0)) &&
          (piVar8 = (int *)FUN_0048b190(iVar1,iVar10), *piVar8 != 0 || piVar8[1] != 0)))) {
        uVar13 = (uint)*(byte *)(iVar14 + 0x288 + param_3);
        uVar12 = *(uint *)(*(int *)(param_3 + 0x2c8) + uVar13 * 8);
        iVar2 = *(int *)(*(int *)(param_3 + 0x2c8) + 4 + uVar13 * 8);
        iVar9 = *(int *)(param_3 + 0x330);
        uVar13 = 0;
        local_38 = 0x13878000;
        local_34 = 0;
        if (iVar9 != 0) {
          iStack_2c = 0;
          do {
            uVar15 = (uint)*(byte *)(iVar14 + 8 + iVar9);
            uVar3 = *(uint *)(*(int *)(iVar9 + 0x48) + uVar15 * 8);
            iVar4 = *(int *)(*(int *)(iVar9 + 0x48) + 4 + uVar15 * 8);
            iVar9 = *(int *)(iVar9 + 0x5c);
            if ((iStack_2c <= iVar4) && ((iStack_2c < iVar4 || (uVar13 < uVar3)))) {
              iStack_2c = iVar4;
              uVar13 = uVar3;
            }
            if ((iVar4 <= local_34) && ((iVar4 < local_34 || (uVar3 < local_38)))) {
              local_38 = uVar3;
              local_34 = iVar4;
            }
          } while (iVar9 != 0);
          if ((local_34 <= iStack_2c) &&
             (((local_34 < iStack_2c || (local_38 < uVar13)) &&
              (lVar16 < CONCAT44((iStack_2c - local_34) - (uint)(uVar13 < local_38),
                                 uVar13 - local_38))))) {
            uVar17 = FUN_00b31c36();
            iVar14 = (iVar2 - (int)((ulonglong)uVar17 >> 0x20)) - (uint)(uVar12 < (uint)uVar17);
            if ((iVar14 < iStack_2c) || ((iVar14 <= iStack_2c && (uVar12 - (uint)uVar17 < uVar13))))
            {
              cVar6 = FUN_0043a720();
              if (cVar6 == '\0') goto LAB_0046aead;
              uVar18 = 0;
            }
            else {
              uVar18 = 1;
            }
            iVar10 = FUN_0046aa60(iVar10,uVar18);
            if (iVar10 != 0) {
              *(undefined1 *)(iVar10 + 0x84) = 1;
              FUN_0068f390();
            }
          }
        }
      }
LAB_0046aead:
      local_48 = local_48 + 1;
    } while (local_48 < iVar11);
  }
  local_48 = param_2[1] - *param_2 >> 2;
  if (((0xf < local_48) && (param_4 != (uint *)0x0)) && (local_48 = local_48 + -0x10, 0 < local_48))
  {
    do {
      uVar12 = *param_4 * 0x343fd + 0x269ec3;
      uVar13 = uVar12 * 0x343fd + 0x269ec3;
      *param_4 = uVar13;
      iVar1 = (int)((longlong)(ulonglong)((uVar13 >> 0x10 & 0x7fff) * (uVar12 >> 0x10 & 0x7fff)) %
                   (longlong)(param_2[1] - *param_2 >> 2)) * 4;
      puVar5 = *(undefined4 **)(iVar1 + *param_2);
      if (puVar5 != (undefined4 *)0x0) {
        (**(code **)*puVar5)(1);
      }
      _Dst = (void *)(*param_2 + iVar1);
      _Src = (void *)((int)_Dst + 4);
      FID_conflict__memcpy(_Dst,_Src,(param_2[1] - (int)_Src >> 2) * 4);
      param_2[1] = param_2[1] + -4;
      local_48 = local_48 + -1;
    } while (local_48 != 0);
  }
  return (uint)(0 < (int)(param_2[1] - *param_2 & 0xfffffffcU));
}

