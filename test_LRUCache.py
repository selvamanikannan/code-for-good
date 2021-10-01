import pytest

from LRUCache import LRUCache

class TestLRUCache(object):
	@pytest.mark.testlrucache
	def test_get_and_put(self):
		"""This method will covers the coverage for both get and put methods"""
		obj = LRUCache(5)
		obj.put("sample", "test")
		assert obj.get("sample") == "test"

