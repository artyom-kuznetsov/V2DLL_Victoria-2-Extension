// FUN_0082edd9 @ 0082edd9 body=[[0082edd9, 0082ee94]]


void FUN_0082edd9(void)

{
  undefined4 uVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  uint unaff_EBX;
  uint uVar7;
  int unaff_EBP;
  int unaff_ESI;
  int unaff_EDI;
  longlong lVar8;
  undefined8 uVar9;
  int local_10;
  uint local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = *(undefined4 *)(unaff_EBP + 0x18);
  local_10 = *(int *)(unaff_EBP + 0xc);
  local_c = *(undefined4 *)(unaff_EBP + 0x10);
  uVar1 = *(undefined4 *)(unaff_ESI + 0x24);
  *(int **)(unaff_EBP + -8) = &local_10;
  lVar8 = __allmul(*(undefined4 *)(unaff_ESI + 0x20),uVar1,*(undefined4 *)(unaff_EBP + 0xc),
                   *(undefined4 *)(unaff_EBP + 0x10));
  **(longlong **)(unaff_EBP + -8) = lVar8 >> 0xf;
  puVar5 = (uint *)FUN_0048bfc0();
  local_4 = *(undefined4 *)(unaff_ESI + 0x24);
  local_8 = *(undefined4 *)(unaff_ESI + 0x20);
  local_c = puVar5[1] << 0xf | *puVar5 >> 0x11;
  local_10 = *puVar5 << 0xf;
  uVar9 = __alldiv();
  local_8 = (undefined4)uVar9;
  *(undefined8 *)(unaff_EBP + 0xc) = uVar9;
  local_4 = *(undefined4 *)(unaff_EBP + 0x10);
  local_c = 0x82ee5f;
  FUN_0082ec40();
  local_4 = *(undefined4 *)(unaff_ESI + 0xc);
  local_8 = *(undefined4 *)(unaff_ESI + 8);
  local_c = *(undefined4 *)(unaff_ESI + 0x24);
  local_10 = *(int *)(unaff_ESI + 0x20);
  lVar8 = __allmul();
  uVar6 = (uint)(lVar8 >> 0xf);
  uVar7 = unaff_EBX - uVar6;
  piVar2 = *(int **)(unaff_EBP + 8);
  uVar3 = *(uint *)(unaff_EBP + 0x14);
  iVar4 = *(int *)(unaff_EBP + 0x18);
  *piVar2 = uVar7 + *(uint *)(unaff_EBP + 0x14);
  piVar2[1] = ((unaff_EDI - (int)((ulonglong)(lVar8 >> 0xf) >> 0x20)) - (uint)(unaff_EBX < uVar6)) +
              iVar4 + (uint)CARRY4(uVar7,uVar3);
  return;
}

