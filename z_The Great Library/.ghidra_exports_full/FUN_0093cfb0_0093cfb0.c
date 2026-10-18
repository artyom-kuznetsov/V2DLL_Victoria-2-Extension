// FUN_0093cfb0 @ 0093cfb0 body=[[0093cfb0, 0093d07b]]


/* WARNING: Type propagation algorithm not settling */

int * FUN_0093cfb0(void)

{
  int *piVar1;
  int *piVar2;
  int *in_EDX;
  int *piVar3;
  int unaff_EDI;
  int local_38 [5];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00b3e788;
  local_10 = ExceptionList;
  piVar3 = *(int **)(unaff_EDI + 4);
  if (*(char *)(piVar3[1] + 0x21) == '\0') {
    piVar1 = (int *)piVar3[1];
    do {
      if (piVar1[3] < *in_EDX) {
        piVar2 = (int *)piVar1[2];
      }
      else {
        piVar2 = (int *)*piVar1;
        piVar3 = piVar1;
      }
      piVar1 = piVar2;
    } while (*(char *)((int)piVar2 + 0x21) == '\0');
  }
  if ((piVar3 == *(int **)(unaff_EDI + 4)) || (*in_EDX < piVar3[3])) {
    local_38[0] = *in_EDX;
    local_24 = 0;
    local_20 = 0;
    local_1c = 0;
    local_14 = local_38 + 1;
    local_38[1] = 0;
    local_38[2] = 0;
    local_38[3] = 0;
    local_8._0_1_ = 1;
    local_8._1_3_ = 0;
    ExceptionList = &local_10;
    FUN_0042b600(local_14,&local_24);
    local_8._0_1_ = 2;
    FUN_0093e860(local_38);
    FUN_0093dd30(&local_14,piVar3);
    piVar3 = local_14;
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_0042b8b0(local_38 + 1);
    local_8 = 0xffffffff;
    FUN_0042b8b0(&local_24);
  }
  ExceptionList = local_10;
  return piVar3 + 4;
}

