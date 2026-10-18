// FUN_009df080 @ 009df080 body=[[009df080, 009df210] [009df214, 009df230] [009df234, 009df253]]


/* WARNING: Removing unreachable block (ram,0x009df227) */

void FUN_009df080(void)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  int in_ECX;
  uint auStack_44 [4];
  undefined4 uStack_34;
  uint uStack_30;
  void *pvStack_24;
  undefined1 uStack_1c;
  undefined3 uStack_1b;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b49738;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  ShowWindow(*(HWND *)(in_ECX + 0xd8),10);
  UpdateWindow(*(HWND *)(in_ECX + 0xd8));
  puVar3 = (undefined4 *)(**(code **)(**(int **)(in_ECX + 0xdc) + 8))();
  puVar1 = *(undefined4 **)(in_ECX + 0xe8);
  if ((puVar3 != puVar1) && (puVar1 != (undefined4 *)0x0)) {
    (**(code **)*puVar1)(1);
  }
  *(undefined4 **)(in_ECX + 0xe8) = puVar3;
  uVar4 = *(uint *)(in_ECX + 0xec);
  if ((*(char *)(uVar4 + 0x4c) == '\0') && (*(char *)(uVar4 + 0x4d) == '\0')) {
    uVar4 = uVar4 & 0xffffff00;
  }
  else {
    uVar4 = 1;
  }
  piVar5 = (int *)(**(code **)(**(int **)(in_ECX + 0xdc) + 0xc))
                            (*(undefined4 *)(in_ECX + 0xd8),uVar4);
  piVar2 = *(int **)(in_ECX + 0xe4);
  if ((piVar5 != piVar2) && (piVar2 != (int *)0x0)) {
    (**(code **)*piVar2)(1);
  }
  *(int **)(in_ECX + 0xe4) = piVar5;
  (**(code **)(*piVar5 + 0x38))(&stack0xffffff8c);
  (**(code **)(**(int **)(in_ECX + 0xe4) + 0x3c))(&stack0xffffff88);
  FUN_00409350("hoi3 1.0",8);
  uStack_30 = 0xf;
  uStack_34 = 0;
  auStack_44[0] = auStack_44[0] & 0xffffff00;
  uStack_1c = 1;
  uStack_1b = 0;
  FUN_00408ed0(&stack0xffffff8c,0,0xffffffff);
  _uStack_1c = CONCAT31(uStack_1b,2);
  *(undefined4 *)(in_ECX + 0x54) = 0x18d;
  *(undefined4 *)(in_ECX + 0x58) = 0;
  *(undefined4 *)(in_ECX + 0x5c) = 0;
  *(undefined4 *)(in_ECX + 0x60) = 0;
  FUN_00408ed0(auStack_44,0,0xffffffff);
  if (uStack_30 < 0x10) {
    *(undefined4 *)(in_ECX + 0x5c) = 0x29c;
    *(undefined4 *)(in_ECX + 0x60) = 0x29b;
    ExceptionList = pvStack_24;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(auStack_44[0]);
}

