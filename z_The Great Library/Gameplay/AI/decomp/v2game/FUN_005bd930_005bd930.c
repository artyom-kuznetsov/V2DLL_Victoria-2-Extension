// FUN_005bd930 @ 005bd930 body=[[005bd930, 005bdad8] [005bdae0, 005bdbc3]]


void FUN_005bd930(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int unaff_EDI;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = param_1;
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00b5b6e0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(int *)(unaff_EDI + 0xb0) = *(int *)(unaff_EDI + 0xb0) + *(int *)(param_1 + 0xb0);
  *(int *)(unaff_EDI + 0xb4) = *(int *)(unaff_EDI + 0xb4) + *(int *)(param_1 + 0xb4);
  *(int *)(unaff_EDI + 0xb8) = *(int *)(unaff_EDI + 0xb8) + *(int *)(param_1 + 0xb8);
  *(int *)(unaff_EDI + 0xac) = *(int *)(unaff_EDI + 0xac) + *(int *)(param_1 + 0xac);
  *(int *)(unaff_EDI + 0xc0) = *(int *)(unaff_EDI + 0xc0) + *(int *)(param_1 + 0xc0);
  *(int *)(unaff_EDI + 0xc4) = *(int *)(unaff_EDI + 0xc4) + *(int *)(param_1 + 0xc4);
  FUN_0047dc20(param_1 + 200);
  FUN_0047dc20(param_1 + 0x120);
  *(int *)(unaff_EDI + 0x90) = *(int *)(unaff_EDI + 0x90) + *(int *)(param_1 + 0x90);
  *(int *)(unaff_EDI + 0x94) = *(int *)(unaff_EDI + 0x94) + *(int *)(param_1 + 0x94);
  *(int *)(unaff_EDI + 0x98) = *(int *)(unaff_EDI + 0x98) + *(int *)(param_1 + 0x98);
  *(int *)(unaff_EDI + 0x9c) = *(int *)(unaff_EDI + 0x9c) + *(int *)(param_1 + 0x9c);
  *(int *)(unaff_EDI + 0x78) = *(int *)(unaff_EDI + 0x78) + *(int *)(param_1 + 0x78);
  *(int *)(unaff_EDI + 0x7c) = *(int *)(unaff_EDI + 0x7c) + *(int *)(param_1 + 0x7c);
  *(int *)(unaff_EDI + 0x80) = *(int *)(unaff_EDI + 0x80) + *(int *)(param_1 + 0x80);
  *(int *)(unaff_EDI + 0x84) = *(int *)(unaff_EDI + 0x84) + *(int *)(param_1 + 0x84);
  *(int *)(unaff_EDI + 0x22c) = *(int *)(unaff_EDI + 0x22c) + *(int *)(param_1 + 0x22c);
  *(int *)(unaff_EDI + 0x228) = *(int *)(unaff_EDI + 0x228) + *(int *)(param_1 + 0x228);
  *(int *)(unaff_EDI + 0x230) = *(int *)(unaff_EDI + 0x230) + *(int *)(param_1 + 0x230);
  *(int *)(unaff_EDI + 0x234) = *(int *)(unaff_EDI + 0x234) + *(int *)(param_1 + 0x234);
  *(int *)(unaff_EDI + 0x238) = *(int *)(unaff_EDI + 0x238) + *(int *)(param_1 + 0x238);
  *(int *)(unaff_EDI + 0x23c) = *(int *)(unaff_EDI + 0x23c) + *(int *)(param_1 + 0x23c);
  *(int *)(unaff_EDI + 0x240) = *(int *)(unaff_EDI + 0x240) + *(int *)(param_1 + 0x240);
  *(int *)(unaff_EDI + 0x244) = *(int *)(unaff_EDI + 0x244) + *(int *)(param_1 + 0x244);
  *(int *)(unaff_EDI + 0x248) = *(int *)(unaff_EDI + 0x248) + *(int *)(param_1 + 0x248);
  *(int *)(unaff_EDI + 0x25c) = *(int *)(unaff_EDI + 0x25c) + *(int *)(param_1 + 0x25c);
  *(int *)(unaff_EDI + 0x24c) = *(int *)(unaff_EDI + 0x24c) + *(int *)(param_1 + 0x24c);
  *(int *)(unaff_EDI + 0x250) = *(int *)(unaff_EDI + 0x250) + *(int *)(param_1 + 0x250);
  *(int *)(unaff_EDI + 0x254) = *(int *)(unaff_EDI + 0x254) + *(int *)(param_1 + 0x254);
  *(int *)(unaff_EDI + 600) = *(int *)(unaff_EDI + 600) + *(int *)(param_1 + 600);
  iVar4 = 0;
  if (0 < (*(int *)(unaff_EDI + 100) - *(int *)(unaff_EDI + 0x60)) / 0x18) {
    param_1 = 0;
    do {
      iVar3 = *(int *)(iVar1 + 0x60) + param_1;
      iVar2 = *(int *)(unaff_EDI + 0x60) + param_1;
      *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + *(int *)(iVar3 + 8);
      *(int *)(iVar2 + 0xc) = *(int *)(iVar2 + 0xc) + *(int *)(iVar3 + 0xc);
      *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + *(int *)(iVar3 + 0x10);
      *(int *)(iVar2 + 0x14) = *(int *)(iVar2 + 0x14) + *(int *)(iVar3 + 0x14);
      param_1 = param_1 + 0x18;
      iVar4 = iVar4 + 1;
    } while (iVar4 < (*(int *)(unaff_EDI + 100) - *(int *)(unaff_EDI + 0x60)) / 0x18);
  }
  if (*(int *)(unaff_EDI + 0x178) < *(int *)(iVar1 + 0x178)) {
    *(int *)(unaff_EDI + 0x178) = *(int *)(iVar1 + 0x178);
    FUN_00408ed0(iVar1 + 0x17c,0,0xffffffff);
    FUN_00408ed0(iVar1 + 0x1d0,0,0xffffffff);
    FUN_00408ed0(iVar1 + 0x198,0,0xffffffff);
    FUN_00408ed0(iVar1 + 0x1b4,0,0xffffffff);
    *(undefined4 *)(unaff_EDI + 0x1ec) = *(undefined4 *)(iVar1 + 0x1ec);
  }
  if (*(int *)(unaff_EDI + 0xc0) < 1000) {
    *(undefined4 *)(unaff_EDI + 0xc0) = 1000;
  }
  ExceptionList = local_10;
  return;
}

