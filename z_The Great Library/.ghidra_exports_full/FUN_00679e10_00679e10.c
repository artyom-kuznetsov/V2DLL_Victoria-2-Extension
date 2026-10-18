// FUN_00679e10 @ 00679e10 body=[[00679e10, 00679eb7]]


undefined4 * FUN_00679e10(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_ECX;
  int *in_EDX;
  undefined4 *puVar3;
  int local_38 [4];
  undefined1 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3cc70;
  local_10 = ExceptionList;
  puVar3 = *(undefined4 **)(in_ECX + 4);
  if (*(char *)((int)puVar3[1] + 0x21) == '\0') {
    puVar1 = (undefined4 *)puVar3[1];
    do {
      if ((int)puVar1[3] < *in_EDX) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar1;
        puVar3 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x21) == '\0');
  }
  if ((puVar3 == *(undefined4 **)(in_ECX + 4)) || (*in_EDX < (int)puVar3[3])) {
    local_38[0] = *in_EDX;
    local_24 = 0;
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    local_38[1] = 0;
    local_38[2] = 0;
    local_38[3] = 0;
    local_28 = 0;
    local_8 = 1;
    ExceptionList = &local_10;
    FUN_0067ae10(local_38);
    FUN_0067a5f0(in_ECX,puVar3);
    FUN_00679f00();
    puVar3 = local_14;
  }
  ExceptionList = local_10;
  return puVar3 + 4;
}

