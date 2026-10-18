// FUN_009a5c20 @ 009a5c20 body=[[009a5c20, 009a5d82]]


void FUN_009a5c20(int *param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *unaff_ESI;
  int unaff_EDI;
  undefined1 local_c [8];
  
  if (*(int *)(unaff_EDI + 8) == 0) {
LAB_009a5c37:
    FUN_009a5ed0(unaff_ESI,1,param_2);
    return;
  }
  if (param_1 == (int *)**(int **)(unaff_EDI + 4)) {
    cVar1 = FUN_0098ab20();
    if (cVar1 != '\0') {
      FUN_009a5ed0(unaff_ESI,1,param_2);
      return;
    }
  }
  else if (param_1 == *(int **)(unaff_EDI + 4)) {
    cVar1 = FUN_0098ab20();
    if (cVar1 != '\0') {
      FUN_009a5ed0(unaff_ESI,0,param_2);
      return;
    }
  }
  else {
    cVar1 = FUN_0098ab20();
    if (cVar1 != '\0') {
      FUN_009a6040();
      cVar1 = FUN_0098ab20();
      if (cVar1 != '\0') {
        if (*(char *)(param_1[2] + 0x35) == '\0') {
          FUN_009a5ed0(unaff_ESI,1,param_2);
          return;
        }
        FUN_009a5ed0(unaff_ESI,0,param_2);
        return;
      }
    }
    cVar1 = FUN_0098ab20();
    if ((cVar1 != '\0') &&
       ((FUN_009a5ab0(), param_1 == *(int **)(unaff_EDI + 4) ||
        (cVar1 = FUN_0098ab20(), cVar1 != '\0')))) {
      if (*(char *)(param_1[2] + 0x35) != '\0') {
        FUN_009a5ed0(unaff_ESI,0,param_2);
        return;
      }
      goto LAB_009a5c37;
    }
  }
  puVar2 = (undefined4 *)FUN_009a5d90(unaff_EDI,local_c,param_2);
  *unaff_ESI = *puVar2;
  return;
}

