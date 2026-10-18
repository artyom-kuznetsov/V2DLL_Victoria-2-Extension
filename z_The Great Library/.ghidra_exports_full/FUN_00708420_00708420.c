// FUN_00708420 @ 00708420 body=[[00708420, 0070847e]]


void FUN_00708420(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  char cVar2;
  undefined4 *unaff_ESI;
  
  cVar2 = FUN_006e2680(&stack0x0000000c);
  if (cVar2 != '\0') {
    uVar1 = *unaff_ESI;
    *unaff_ESI = *param_1;
    *param_1 = uVar1;
  }
  cVar2 = FUN_006e2680(&stack0x0000000c);
  if (cVar2 != '\0') {
    uVar1 = *param_2;
    *param_2 = *unaff_ESI;
    *unaff_ESI = uVar1;
  }
  cVar2 = FUN_006e2680(&stack0x0000000c);
  if (cVar2 != '\0') {
    uVar1 = *unaff_ESI;
    *unaff_ESI = *param_1;
    *param_1 = uVar1;
  }
  return;
}

