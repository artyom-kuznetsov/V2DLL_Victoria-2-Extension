// FUN_00a2d060 @ 00a2d060 body=[[00a2d060, 00a2d1ad]]


void FUN_00a2d060(int *param_1,undefined4 param_2)

{
  char cVar1;
  int in_EAX;
  undefined4 *puVar2;
  undefined4 *unaff_ESI;
  undefined1 local_c [8];
  
  if (*(int *)(in_EAX + 8) == 0) {
LAB_00a2d07a:
    FUN_00a2d330(unaff_ESI,1,param_2);
    return;
  }
  if (param_1 == (int *)**(int **)(in_EAX + 4)) {
    cVar1 = FUN_0098ab20();
    if (cVar1 != '\0') {
LAB_00a2d0a4:
      FUN_00a2d330(unaff_ESI,1,param_2);
      return;
    }
  }
  else if (param_1 == *(int **)(in_EAX + 4)) {
    cVar1 = FUN_0098ab20();
    if (cVar1 != '\0') {
      FUN_00a2d330(unaff_ESI,0,param_2);
      return;
    }
  }
  else {
    cVar1 = FUN_0098ab20();
    if (cVar1 != '\0') {
      FUN_00a2d4d0();
      cVar1 = FUN_0098ab20();
      if (cVar1 != '\0') {
        if (*(char *)(param_1[2] + 0x31) != '\0') {
          FUN_00a2d330(unaff_ESI,0,param_2);
          return;
        }
        goto LAB_00a2d0a4;
      }
    }
    cVar1 = FUN_0098ab20();
    if ((cVar1 != '\0') &&
       ((FUN_00a2cf30(), param_1 == *(int **)(in_EAX + 4) || (cVar1 = FUN_0098ab20(), cVar1 != '\0')
        ))) {
      if (*(char *)(param_1[2] + 0x31) != '\0') {
        FUN_00a2d330(unaff_ESI,0,param_2);
        return;
      }
      goto LAB_00a2d07a;
    }
  }
  puVar2 = (undefined4 *)FUN_00a2d1b0(in_EAX,local_c,param_2);
  *unaff_ESI = *puVar2;
  return;
}

