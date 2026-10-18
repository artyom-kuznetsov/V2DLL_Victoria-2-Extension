// FUN_00462e70 @ 00462e70 body=[[00462e70, 00462fbd]]


void FUN_00462e70(int *param_1,undefined4 param_2)

{
  char cVar1;
  int in_EAX;
  undefined4 *puVar2;
  undefined4 *unaff_ESI;
  undefined1 local_c [8];
  
  if (*(int *)(in_EAX + 8) == 0) {
LAB_00462e8a:
    FUN_00463210(unaff_ESI,1,param_2);
    return;
  }
  if (param_1 == (int *)**(int **)(in_EAX + 4)) {
    cVar1 = FUN_0098ab20();
    if (cVar1 != '\0') {
LAB_00462eb4:
      FUN_00463210(unaff_ESI,1,param_2);
      return;
    }
  }
  else if (param_1 == *(int **)(in_EAX + 4)) {
    cVar1 = FUN_0098ab20();
    if (cVar1 != '\0') {
      FUN_00463210(unaff_ESI,0,param_2);
      return;
    }
  }
  else {
    cVar1 = FUN_0098ab20();
    if (cVar1 != '\0') {
      FUN_004639b0();
      cVar1 = FUN_0098ab20();
      if (cVar1 != '\0') {
        if (*(char *)(param_1[2] + 0x39) != '\0') {
          FUN_00463210(unaff_ESI,0,param_2);
          return;
        }
        goto LAB_00462eb4;
      }
    }
    cVar1 = FUN_0098ab20();
    if ((cVar1 != '\0') &&
       ((FUN_00462ac0(), param_1 == *(int **)(in_EAX + 4) || (cVar1 = FUN_0098ab20(), cVar1 != '\0')
        ))) {
      if (*(char *)(param_1[2] + 0x39) != '\0') {
        FUN_00463210(unaff_ESI,0,param_2);
        return;
      }
      goto LAB_00462e8a;
    }
  }
  puVar2 = (undefined4 *)FUN_004630d0(in_EAX,local_c,param_2);
  *unaff_ESI = *puVar2;
  return;
}

