// FUN_00a45150 @ 00a45150 body=[[00a45150, 00a4529d]]


void FUN_00a45150(int *param_1,undefined4 param_2)

{
  char cVar1;
  int in_EAX;
  undefined4 *puVar2;
  undefined4 *unaff_ESI;
  undefined1 local_c [8];
  
  if (*(int *)(in_EAX + 8) == 0) {
LAB_00a4516a:
    FUN_00463630(unaff_ESI,1,param_2);
    return;
  }
  if (param_1 == (int *)**(int **)(in_EAX + 4)) {
    cVar1 = FUN_0098ab20();
    if (cVar1 != '\0') {
LAB_00a45194:
      FUN_00463630(unaff_ESI,1,param_2);
      return;
    }
  }
  else if (param_1 == *(int **)(in_EAX + 4)) {
    cVar1 = FUN_0098ab20();
    if (cVar1 != '\0') {
      FUN_00463630(unaff_ESI,0,param_2);
      return;
    }
  }
  else {
    cVar1 = FUN_0098ab20();
    if (cVar1 != '\0') {
      FUN_00a452a0();
      cVar1 = FUN_0098ab20();
      if (cVar1 != '\0') {
        if (*(char *)(param_1[2] + 0x2d) != '\0') {
          FUN_00463630(unaff_ESI,0,param_2);
          return;
        }
        goto LAB_00a45194;
      }
    }
    cVar1 = FUN_0098ab20();
    if ((cVar1 != '\0') &&
       ((FUN_00462cd0(), param_1 == *(int **)(in_EAX + 4) || (cVar1 = FUN_0098ab20(), cVar1 != '\0')
        ))) {
      if (*(char *)(param_1[2] + 0x2d) != '\0') {
        FUN_00463630(unaff_ESI,0,param_2);
        return;
      }
      goto LAB_00a4516a;
    }
  }
  puVar2 = (undefined4 *)FUN_004634b0(in_EAX,local_c,param_2);
  *unaff_ESI = *puVar2;
  return;
}

