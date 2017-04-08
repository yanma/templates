#!/usr/bin/env ruby
require 'pp'

t = STDIN.gets.to_i
(1..t).each do |i|
    elem = STDIN.gets.split(" ")
    n = elem[0].to_i
    m = elem[1].to_i
    puts "Case \##{i}: #{n + m} #{n * m}"
end

