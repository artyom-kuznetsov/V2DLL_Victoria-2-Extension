// FUN_00aeb410 @ 00aeb410 body=[[00aeb410, 00aeb45f]]


undefined4 FUN_00aeb410(undefined4 param_1)

{
  uint uVar1;
  char cVar2;
  int *in_ECX;
  uint uVar3;
  
  uVar1 = in_ECX[1];
  uVar3 = 0;
  if (uVar1 != 0) {
    do {
      FUN_00b15770(*(undefined4 *)(*(int *)(*in_ECX + uVar3 * 4) + 4));
      cVar2 = FUN_00b14730(param_1);
      if (cVar2 != '\0') {
        return *(undefined4 *)(*in_ECX + uVar3 * 4);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  return 0;
}

