// FUN_0096ff70 @ 0096ff70 body=[[0096ff70, 00970067]]


void FUN_0096ff70(void)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint in_ECX;
  uint *unaff_EDI;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3e732;
  local_10 = ExceptionList;
  uVar1 = unaff_EDI[1];
  if ((in_ECX < uVar1) && (uVar2 = *unaff_EDI, uVar2 <= in_ECX)) {
    ExceptionList = &local_10;
    if (uVar1 == unaff_EDI[2]) {
      ExceptionList = &local_10;
      FUN_00970070();
    }
    in_ECX = *unaff_EDI + ((int)(in_ECX - uVar2) / 0x1c) * 0x1c;
    puVar3 = (undefined4 *)unaff_EDI[1];
    if (puVar3 == (undefined4 *)0x0) goto LAB_00970055;
    puVar3[1] = *(undefined4 *)(in_ECX + 4);
    *puVar3 = CMeanTimeToHappen::vftable;
    puVar3[2] = *(undefined4 *)(in_ECX + 8);
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    local_8 = 1;
  }
  else {
    ExceptionList = &local_10;
    if (uVar1 == unaff_EDI[2]) {
      ExceptionList = &local_10;
      FUN_00970070();
    }
    puVar3 = (undefined4 *)unaff_EDI[1];
    if (puVar3 == (undefined4 *)0x0) goto LAB_00970055;
    puVar3[1] = *(undefined4 *)(in_ECX + 4);
    *puVar3 = CMeanTimeToHappen::vftable;
    puVar3[2] = *(undefined4 *)(in_ECX + 8);
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    local_8 = 3;
  }
  FUN_009beeb0(in_ECX + 0xc);
LAB_00970055:
  unaff_EDI[1] = unaff_EDI[1] + 0x1c;
  ExceptionList = local_10;
  return;
}

