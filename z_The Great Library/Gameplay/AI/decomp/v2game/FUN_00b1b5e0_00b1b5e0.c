// FUN_00b1b5e0 @ 00b1b5e0 body=[[00b1b5e0, 00b1b8b1]]


void FUN_00b1b5e0(void)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  ushort uVar5;
  byte bVar6;
  ushort uVar7;
  ushort uVar8;
  int iVar9;
  uint uVar10;
  int *in_ECX;
  int iVar11;
  uint uVar12;
  uint local_4;
  
  *(undefined2 *)(in_ECX + 8) = 0xffff;
  while( true ) {
    uVar7 = FUN_00b1afa0(0xffff);
    if (uVar7 == 0xffff) break;
    uVar8 = FUN_00b1afa0((uint)uVar7);
    if (uVar8 == 0xffff) break;
    iVar9 = *in_ECX;
    iVar3 = *(int *)(iVar9 + (uint)uVar8 * 0x10);
    iVar11 = (uint)uVar7 * 0x10;
    iVar4 = *(int *)(iVar11 + iVar9);
    *(short *)(iVar11 + iVar9 + 8) = (short)in_ECX[1];
    *(short *)(*in_ECX + 8 + (uint)uVar8 * 0x10) = (short)in_ECX[1];
    iVar9 = in_ECX[1];
    *(short *)(in_ECX + 8) = (short)iVar9;
    local_4 = local_4 & 0xffffff00;
    in_ECX[1] = iVar9 + 1U;
    if ((uint)in_ECX[2] < iVar9 + 1U) {
      iVar9 = iVar9 + 2;
      if (iVar9 == 0) {
        in_ECX[1] = 0;
        in_ECX[2] = 0;
        if (*in_ECX != 0) {
          (*(code *)PTR__free_00f01b10)(*in_ECX);
          *in_ECX = 0;
        }
      }
      else {
        if (*in_ECX == 0) {
          iVar11 = (*(code *)PTR_FUN_00f01b08)(iVar9 * 0x10,(short)in_ECX[3],4,2,0,0xffffffff);
        }
        else {
          iVar11 = (*(code *)PTR_FUN_00f01b0c)(*in_ECX,iVar9 * 0x10);
        }
        *in_ECX = iVar11;
        in_ECX[2] = iVar9;
      }
    }
    piVar1 = (int *)(*in_ECX + -0x10 + in_ECX[1] * 0x10);
    if (piVar1 != (int *)0x0) {
      *piVar1 = iVar3 + iVar4;
      piVar1[1] = CONCAT22(uVar8,uVar7);
      piVar1[2] = 0xffff;
      piVar1[3] = local_4;
    }
  }
  uVar10 = in_ECX[5];
  uVar12 = 0;
  bVar6 = 0;
  if (((uVar10 != 0x102) && (in_ECX[5] = 0x102, uVar10 < 0x102)) && ((uint)in_ECX[6] < 0x102)) {
    if (in_ECX[4] == 0) {
      iVar9 = (*(code *)PTR_FUN_00f01b08)(0x810,(short)in_ECX[7],4,2,0,0xffffffff);
    }
    else {
      iVar9 = (*(code *)PTR_FUN_00f01b0c)(in_ECX[4]);
    }
    in_ECX[4] = iVar9;
    in_ECX[6] = 0x102;
  }
  do {
    *(char *)(in_ECX[4] + uVar12 * 8) = (char)uVar12;
    iVar9 = in_ECX[4] + uVar12 * 8;
    uVar10 = uVar12 & 0xffff;
    *(undefined4 *)(iVar9 + 4) = 0;
    *(undefined1 *)(iVar9 + 1) = 0;
    iVar3 = *in_ECX;
    for (uVar7 = *(ushort *)(iVar3 + 8 + uVar10 * 0x10); uVar7 != 0xffff;
        uVar7 = *(ushort *)(iVar3 + 8 + (uint)uVar7 * 0x10)) {
      if (*(short *)(iVar3 + 6 + (uint)uVar7 * 0x10) == (short)uVar10) {
        *(uint *)(iVar9 + 4) = *(uint *)(iVar9 + 4) | 1 << (*(byte *)(iVar9 + 1) & 0x1f);
      }
      *(char *)(iVar9 + 1) = *(char *)(iVar9 + 1) + '\x01';
      iVar3 = *in_ECX;
      uVar10 = (uint)uVar7;
    }
    bVar2 = *(byte *)(in_ECX[4] + 1 + uVar12 * 8);
    if (bVar6 < bVar2) {
      bVar6 = bVar2;
    }
    uVar12 = uVar12 + 1;
  } while (uVar12 < 0x100);
  *(undefined1 *)(in_ECX[4] + 0x800) = *(undefined1 *)((int)in_ECX + 0x22);
  iVar9 = in_ECX[4];
  *(undefined4 *)(iVar9 + 0x804) = 0;
  *(undefined1 *)(iVar9 + 0x801) = 0;
  iVar3 = *in_ECX;
  uVar8 = *(ushort *)(iVar3 + 0x1008);
  uVar7 = 0x100;
  while (uVar5 = uVar8, uVar5 != 0xffff) {
    if (*(ushort *)(iVar3 + 6 + (uint)uVar5 * 0x10) == uVar7) {
      *(uint *)(iVar9 + 0x804) = *(uint *)(iVar9 + 0x804) | 1 << (*(byte *)(iVar9 + 0x801) & 0x1f);
    }
    *(char *)(iVar9 + 0x801) = *(char *)(iVar9 + 0x801) + '\x01';
    iVar3 = *in_ECX;
    uVar7 = uVar5;
    uVar8 = *(ushort *)(iVar3 + 8 + (uint)uVar5 * 0x10);
  }
  *(undefined1 *)(in_ECX[4] + 0x808) = 0;
  iVar9 = in_ECX[4];
  *(undefined4 *)(iVar9 + 0x80c) = 0;
  *(undefined1 *)(iVar9 + 0x809) = 0;
  iVar3 = *in_ECX;
  uVar8 = *(ushort *)(iVar3 + 0x1018);
  uVar7 = 0x101;
  while (uVar5 = uVar8, uVar5 != 0xffff) {
    if (*(ushort *)(iVar3 + 6 + (uint)uVar5 * 0x10) == uVar7) {
      *(uint *)(iVar9 + 0x80c) = *(uint *)(iVar9 + 0x80c) | 1 << (*(byte *)(iVar9 + 0x809) & 0x1f);
    }
    *(char *)(iVar9 + 0x809) = *(char *)(iVar9 + 0x809) + '\x01';
    iVar3 = *in_ECX;
    uVar7 = uVar5;
    uVar8 = *(ushort *)(iVar3 + 8 + (uint)uVar5 * 0x10);
  }
  return;
}

