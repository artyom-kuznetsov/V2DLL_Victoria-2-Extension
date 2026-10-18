// FUN_009d7140 @ 009d7140 body=[[009d7140, 009d71a9]]


void FUN_009d7140(int *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *unaff_ESI;
  undefined1 local_8 [4];
  
  iVar2 = unaff_ESI[1];
  iVar3 = *unaff_ESI;
  iVar6 = (**(code **)(*param_1 + 0x38))();
  iVar4 = unaff_ESI[1];
  uVar1 = iVar6 + (iVar2 - iVar3);
  iVar5 = *unaff_ESI;
  local_8[0] = 0;
  if ((uint)(iVar4 - iVar5) < uVar1) {
    FUN_004d8570(unaff_ESI,iVar4,(iVar5 - iVar4) + uVar1,local_8);
  }
  else if (uVar1 < (uint)(iVar4 - iVar5)) {
    FUN_009d69b0(unaff_ESI,iVar5 + uVar1,iVar4);
  }
  (**(code **)(*param_1 + 0xc))(*unaff_ESI + (iVar2 - iVar3),iVar6);
  return;
}

