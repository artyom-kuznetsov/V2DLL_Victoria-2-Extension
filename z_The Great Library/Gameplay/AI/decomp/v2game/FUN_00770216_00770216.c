// FUN_00770216 @ 00770216 body=[[00770216, 00770233] [00770237, 00770336] [00770432, 0077049e] [007704a2, 00770524] [00770528, 00770559]]


void FUN_00770216(void)

{
  undefined4 *puVar1;
  char cVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 *unaff_EBX;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x1c);
  cVar3 = (char)unaff_EBX;
  *(char *)(*(int *)(unaff_EBP + -0x98) + 0x5bc) = cVar3;
  if (puVar1 != unaff_EBX) {
    FUN_009d6f00();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  FUN_00a14950();
  FUN_009885d0();
  *(undefined1 *)(unaff_EBP + -4) = 0x7f;
  uVar4 = FUN_009a8ee0(unaff_EBP + -0x88,unaff_EBP + -0x6c);
  *(undefined4 *)(unaff_EBP + -0x40) = uVar4;
  *(undefined1 *)(unaff_EBP + -4) = 0x80;
  iVar5 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c),*(undefined8 *)(iVar5 + 0x74));
  *(undefined1 *)(unaff_EBP + -4) = 0x81;
  FUN_009f23c0();
  *(undefined1 *)(unaff_EBP + -4) = 0x82;
  FUN_00771510();
  FUN_0076bf20();
  FUN_00408ad0();
  *(undefined1 *)(unaff_EBP + -4) = 0x7f;
  FUN_009a9740();
  *(undefined1 *)(unaff_EBP + -4) = 0x73;
  FUN_00408ad0();
  FUN_0076d340();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_009a0dc0();
  iVar5 = *(int *)(unaff_EBP + -0x98);
  if (*(undefined4 **)(iVar5 + 0x5d0) != unaff_EBX) {
    (**(code **)**(undefined4 **)(iVar5 + 0x5d0))();
  }
  *(undefined4 **)(iVar5 + 0x5d0) = unaff_EBX;
  *(undefined4 **)(iVar5 + 0x5b0) = unaff_EBX;
  iVar6 = (**(code **)(**(int **)(iVar5 + 4) + 0x100))();
  (**(code **)(**(int **)(iVar6 + 0xe4) + 0x10))();
  cVar2 = FUN_00772020();
  if (cVar2 != '\0') {
    iVar6 = (**(code **)(**(int **)(iVar5 + 4) + 0x44))();
    if (*(char *)(iVar6 + 0x34) != cVar3) {
      FUN_009885d0();
      *(undefined4 *)(unaff_EBP + -4) = 0x88;
      piVar7 = (int *)(**(code **)(**(int **)(iVar5 + 0x278) + 0x34))(unaff_EBP + -0xd4);
      (**(code **)(*piVar7 + 0xb8))();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (0xf < *(uint *)(unaff_EBP + -0xc0)) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      *(undefined4 *)(unaff_EBP + -0xc0) = 0xf;
      *(undefined4 **)(unaff_EBP + -0xc4) = unaff_EBX;
      *(char *)(unaff_EBP + -0xd4) = cVar3;
      goto LAB_00770528;
    }
  }
  *(undefined4 *)(unaff_EBP + -0xe4) = 0xf;
  *(undefined4 **)(unaff_EBP + -0xe8) = unaff_EBX;
  *(char *)(unaff_EBP + -0xf8) = cVar3;
  FUN_00409350();
  *(undefined4 *)(unaff_EBP + -4) = 0x87;
  piVar7 = (int *)(**(code **)(**(int **)(iVar5 + 0x278) + 0x34))(unaff_EBP + -0xf8);
  (**(code **)(*piVar7 + 0xbc))();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (0xf < *(uint *)(unaff_EBP + -0xe4)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
LAB_00770528:
  if (*(char *)(*(int *)(iVar5 + 4) + 0x760) != cVar3) {
    cVar3 = FUN_00772020();
    if (cVar3 != '\0') {
      FUN_007725b0();
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

