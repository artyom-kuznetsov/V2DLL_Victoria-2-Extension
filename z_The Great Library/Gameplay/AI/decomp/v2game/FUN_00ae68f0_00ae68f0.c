// FUN_00ae68f0 @ 00ae68f0 body=[[00ae68f0, 00ae6925]]


void FUN_00ae68f0(int param_1,char param_2)

{
  int *in_ECX;
  int unaff_retaddr;
  
  if ((undefined4 *)*in_ECX == (undefined4 *)0x0) {
    *in_ECX = param_1;
    return;
  }
  if (param_2 != '\0') {
    (*(code *)**(undefined4 **)*in_ECX)(1);
    *in_ECX = unaff_retaddr;
    return;
  }
  *in_ECX = param_1;
  return;
}

