#!/usr/bin/env ruby

class MegaGreeter
  attr_accessor :names

  #create the object
  def initialize(name = "World")
    @names = names
  end

  #say hello to everyone
  def say_hi
    if @names.nil?
      puts "..."
    elsif @names.respond_to?("each")
      # @names is a list of some kind, iterate!
      @names.each do |name|
        puts "Hello #{name}!"
      end
    else
      puts "Hello #{@names}"
    end
  end

  # say bye to everyone
  def say_bye
    if @names.nil?
        puts "..."
    elsif @names.respond_to?("join")
      # @names is iteratable
        puts "Goodbye #{@names.join(", ")}. Come back soon!"
    else
        puts "Goodbye #{@names}. Come back soon!"
    end
  end
end

if __FILE__ == $0
  puts __FILE__
  puts $0
  mg = MegaGreeter.new
  mg.say_hi
  mg.say_bye

  # Change name to be "Zeke"
  mg.names = "Zeke"
  mg.say_hi
  mg.say_bye

  # Change the name to an array of names
  mg.names = ["Albert", "Brenda", "Charles",
              "Dave", "Jasper"]
  mg.say_hi
  mg.say_bye

  # Change names to nil
  mg.names = nil
  mg.say_hi
  mg.say_bye
end
