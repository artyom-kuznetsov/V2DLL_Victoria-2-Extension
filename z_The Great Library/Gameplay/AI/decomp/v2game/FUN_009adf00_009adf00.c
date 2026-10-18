// FUN_009adf00 @ 009adf00 body=[[009adf00, 009adf47]]


int FUN_009adf00(int param_1)

{
  int in_EAX;
  int unaff_EDI;
  
  if ((param_1 != unaff_EDI) && (unaff_EDI != in_EAX)) {
    FUN_009adff0(param_1);
    return param_1 + ((in_EAX - unaff_EDI) / 0x1c) * 0x1c;
  }
  return param_1;
}

