// FUN_009659f0 @ 009659f0 body=[[009659f0, 00965bc1]]


void FUN_009659f0(int param_1)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint *unaff_ESI;
  undefined8 uVar9;
  longlong lVar10;
  
  uVar8 = *(uint *)(*(int *)(param_1 + 100) + 0x1bc);
  uVar1 = *(uint *)(*(int *)(param_1 + 100) + 0x1a8);
  uVar7 = uVar8 >> 0x11;
  *unaff_ESI = uVar8 << 0xf;
  unaff_ESI[1] = uVar7;
  if ((uVar1 >> 0x11 != 0) || ((uVar1 & 0x1ffff) != 0)) {
    uVar8 = *(uint *)(*(int *)(param_1 + 100) + 0x1a8);
    uVar9 = __alldiv(*unaff_ESI << 0xf,uVar7 << 0xf | *unaff_ESI >> 0x11,uVar8 << 0xf,uVar8 >> 0x11)
    ;
    *(undefined8 *)unaff_ESI = uVar9;
  }
  puVar2 = *(uint **)(DAT_012586dc + 0x50);
  uVar1 = *puVar2;
  uVar8 = *unaff_ESI;
  *unaff_ESI = *unaff_ESI - uVar1;
  uVar7 = puVar2[1];
  uVar3 = puVar2[3];
  unaff_ESI[1] = (unaff_ESI[1] - uVar7) - (uint)(uVar8 < uVar1);
  uVar8 = puVar2[2];
  if (((int)uVar3 <= (int)unaff_ESI[1]) &&
     (((int)uVar3 < (int)unaff_ESI[1] || (uVar8 < *unaff_ESI)))) {
    *unaff_ESI = uVar8;
    unaff_ESI[1] = uVar3;
  }
  uVar9 = __alldiv(*unaff_ESI << 0xf,unaff_ESI[1] << 0xf | *unaff_ESI >> 0x11,uVar8 - uVar1,
                   (uVar3 - uVar7) - (uint)(uVar8 < uVar1));
  *unaff_ESI = (uint)uVar9;
  iVar4 = *(int *)(param_1 + 100);
  iVar5 = *(int *)(DAT_012587e4 + 4);
  unaff_ESI[1] = (uint)((ulonglong)uVar9 >> 0x20);
  iVar6 = *(int *)(iVar5 + *(int *)(iVar4 + 300) * 4);
  if ((-1 < (int)unaff_ESI[1]) && ((0 < (int)unaff_ESI[1] || (*unaff_ESI != 0)))) {
    iVar4 = *(int *)(*(int *)(*(int *)(iVar5 + *(int *)(iVar4 + 300) * 4) + 0xa60) + 0x370);
    iVar5 = *(int *)(*(int *)(iVar6 + 0xbcc) + 100);
    uVar8 = iVar5 + 1000;
    uVar9 = __alldiv(iVar5 << 0x1e,((int)uVar8 >> 0x1f) << 0x1e | uVar8 >> 2,0x1f40000,0);
    lVar10 = __allmul(*unaff_ESI,unaff_ESI[1],uVar9);
    *(longlong *)unaff_ESI = lVar10 >> 0xf;
    uVar8 = iVar4 + 1000;
    uVar9 = __alldiv(iVar4 << 0x1e,((int)uVar8 >> 0x1f) << 0x1e | uVar8 >> 2,0x1f40000,0);
    lVar10 = __allmul(uVar9,*unaff_ESI,unaff_ESI[1]);
    uVar8 = *unaff_ESI;
    *(longlong *)unaff_ESI = lVar10 >> 0xf;
    iVar4 = **(int **)(iVar6 + 0x1234);
    lVar10 = __allmul(*(undefined4 *)(iVar4 + 0x10),*(undefined4 *)(iVar4 + 0x14),uVar8,unaff_ESI[1]
                     );
    *(longlong *)unaff_ESI = lVar10 >> 0xf;
  }
  lVar10 = __allmul(puVar2[4],puVar2[5],*unaff_ESI,unaff_ESI[1]);
  *(longlong *)unaff_ESI = lVar10 >> 0xf;
  return;
}

