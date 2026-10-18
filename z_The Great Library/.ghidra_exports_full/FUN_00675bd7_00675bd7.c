// Catch@00675bd7 @ 00675bd7 body=[[00675bd7, 00675df3]]


undefined4 Catch_00675bd7(void)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int unaff_EBP;
  
  uVar1 = (**(code **)(**(int **)(unaff_EBP + -0x34) + 4))(unaff_EBP + -0xe4);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00988fa0(uVar1);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00408ad0();
  FUN_009885d0();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_004015b0(unaff_EBP + -0x30,0x22c4,0x10004);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  uVar1 = FUN_00987d20();
  iVar5 = *(int *)(unaff_EBP + -0x90);
  if (*(uint *)(unaff_EBP + -0x7c) < 0x10) {
    iVar5 = unaff_EBP + -0x90;
  }
  uVar1 = FUN_00418e30(uVar1,iVar5);
  FUN_00401280(uVar1);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_00401650();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00408ad0();
  iVar5 = *(int *)(unaff_EBP + 8);
  (**(code **)(**(int **)(*(int *)(iVar5 + 0x17e8) + 0xe4) + 0x10))(0);
  FUN_009885d0();
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_009885d0();
  *(undefined1 *)(unaff_EBP + -4) = 10;
  FUN_009885d0();
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  piVar2 = (int *)(**(code **)(**(int **)(iVar5 + 0x1d24) + 0x6c))(unaff_EBP + -0xac);
  iVar3 = (**(code **)(*piVar2 + 0x40))(unaff_EBP + -0x74);
  uVar1 = FUN_009a8ee0(unaff_EBP + -0x28,unaff_EBP + -0x58);
  *(undefined4 *)(unaff_EBP + 8) = uVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  iVar4 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  (**(code **)(*(int *)(iVar3 + 0x54) + 0x40))();
  FUN_00408ad0();
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  FUN_009a9740(unaff_EBP + -0x28);
  FUN_00408ad0();
  FUN_00408ad0();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00408ad0();
  FUN_009885d0();
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  FUN_009885d0();
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  piVar2 = (int *)(**(code **)(**(int **)(iVar5 + 0x1d24) + 0x6c))(unaff_EBP + -0x58);
  uVar1 = (**(code **)(*piVar2 + 0x40))();
  FUN_009b6400(uVar1);
  FUN_00408ad0();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00408ad0();
  (**(code **)(**(int **)(*(int *)(iVar5 + 0x17e8) + 0xe4) + 0x10))(0);
  FUN_00408ad0();
  return 0x675bc4;
}

