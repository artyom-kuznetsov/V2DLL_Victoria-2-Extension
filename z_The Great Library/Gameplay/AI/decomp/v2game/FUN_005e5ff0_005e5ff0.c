// FUN_005e5ff0 @ 005e5ff0 body=[[005e5ff0, 005e6030]]


int FUN_005e5ff0(int param_1)

{
  int in_EAX;
  int unaff_EDI;
  
  if ((param_1 != unaff_EDI) && (unaff_EDI != in_EAX)) {
    FUN_005e6100(param_1);
    return param_1 + ((in_EAX - unaff_EDI) / 0x28) * 0x28;
  }
  return param_1;
}

