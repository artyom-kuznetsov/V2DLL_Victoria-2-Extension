// FUN_004b7420 @ 004b7420 body=[[004b7420, 004b752f]]


void FUN_004b7420(int *param_1,char param_2)

{
  undefined4 *puVar1;
  char cVar2;
  int unaff_EDI;
  
  if ((*(char *)(*(int *)(unaff_EDI + 0x5c) + 0x2a) == '\0') ||
     (cVar2 = (**(code **)(*param_1 + 0x3c))(), cVar2 == '\0')) {
    for (puVar1 = *(undefined4 **)(unaff_EDI + 0xfc);
        (puVar1 != (undefined4 *)0x0 && ((int *)*puVar1 != param_1));
        puVar1 = (undefined4 *)puVar1[2]) {
    }
    FUN_005f2ae0(puVar1);
    if (param_2 == '\0') {
      for (puVar1 = *(undefined4 **)(unaff_EDI + 0xec);
          (puVar1 != (undefined4 *)0x0 && ((int *)*puVar1 != param_1));
          puVar1 = (undefined4 *)puVar1[2]) {
      }
      FUN_005f2ae0(puVar1);
      FUN_004b7be0(unaff_EDI);
      return;
    }
  }
  else {
    if (param_2 == '\0') {
      if (*(int *)(unaff_EDI + 0x158) != 0) {
        for (puVar1 = *(undefined4 **)(*(int *)(unaff_EDI + 0x158) + 8);
            (puVar1 != (undefined4 *)0x0 && ((int *)*puVar1 != param_1));
            puVar1 = (undefined4 *)puVar1[2]) {
        }
        FUN_005f2ae0(puVar1);
      }
      for (puVar1 = *(undefined4 **)(unaff_EDI + 0xec);
          (puVar1 != (undefined4 *)0x0 && ((int *)*puVar1 != param_1));
          puVar1 = (undefined4 *)puVar1[2]) {
      }
      FUN_005f2ae0(puVar1);
    }
    for (puVar1 = *(undefined4 **)(unaff_EDI + 0xfc);
        (puVar1 != (undefined4 *)0x0 && ((int *)*puVar1 != param_1));
        puVar1 = (undefined4 *)puVar1[2]) {
    }
    FUN_005f2ae0(puVar1);
    if (param_2 == '\0') {
      FUN_004b7be0(unaff_EDI);
    }
  }
  return;
}

